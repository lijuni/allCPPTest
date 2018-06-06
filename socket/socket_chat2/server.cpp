#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<iostream>
#include<thread>

#define PORT 8000
#define QUEUE 20

using std::cout;
using std::endl;

int sockfd;
struct sockaddr_in client_sockaddr;
socklen_t length = sizeof(client_sockaddr);
int conns[2] = {};
int z=0;

void thread_fn()
{
	int conn = accept(sockfd, (struct sockaddr*)&client_sockaddr, &length);
	if( conn<0 )
	{
		cout<<"ACCEPT"<<endl;
		exit(-1);
	}
	conns[z] = conn;
	z++;

	fd_set rfds;
	struct timeval tv;
	int retval, maxfd;
	
	while(1)
	{
		FD_ZERO(&rfds);
		FD_SET(0, &rfds);
		maxfd=0;
		FD_SET(conn, &rfds);
		if( maxfd<conn )
			maxfd=conn;
		tv.tv_sec = 5;
		tv.tv_usec = 0;

		retval = select(maxfd+1, &rfds, NULL, NULL, &tv);
		
		if( retval == -1 ){
			cout<<"SELECT出错， 客户端程序退出"<<endl;
			break;
		}else if( retval==0 )
		{
			cout<<"服务端没有信息输入， 并且客户端也没有信息到来"<<endl;
			continue;
		}else{
			
			if( FD_ISSET(conn, &rfds) )
			{
				char buffer[1024];
				memset(buffer, 0, sizeof(buffer));
				int len = recv(conn, buffer, sizeof(buffer), 0);
				cout<<"收到啦 "<<buffer<<endl;;
			}

			if( FD_ISSET(0, &rfds) )
			{
				char sendbuf[1024];
				fgets(sendbuf, sizeof(sendbuf), stdin);
				for(int i=0; i<z; i++)
					send( conns[i], sendbuf, sizeof(sendbuf), 0 );
			
			}
		
		}

	}

	close(conn);
}

void thread_select(int conn)
{}

int main()
{
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");
	//server_sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);

	if( bind(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))==-1 )
	{
		cout<<"BIND"<<endl;
		exit(1);
	}

	if( listen(sockfd, QUEUE)==-1 )
	{
		cout<<"LISTEN"<<endl;
		exit(1);
	}

	std::thread t1(thread_fn);
	std::thread t2(thread_fn);
	t1.join();
	t2.join();

	close(sockfd);
	return 0;




}






































