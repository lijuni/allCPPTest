#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define PORT 8000
#define QUEUE 20

using std::cout;
using std::endl;

int main()
{
	fd_set rfds;
	struct timeval tv;
	int retval, maxfd;
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	
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

	struct sockaddr_in client_sockaddr;
	socklen_t len = sizeof(client_sockaddr);

	int client_fd = accept( sockfd, (struct sockaddr*)&client_sockaddr, &len);
	if( client_fd<0 )
	{
		cout<<"CONNECT"<<endl;
		exit(1);
	}

	while(1)
	{
		FD_ZERO(&rfds);
		FD_SET(0, &rfds);
		maxfd=0;
		FD_SET(client_fd, &rfds);

		if(maxfd<client_fd)
			maxfd=client_fd;

		tv.tv_sec=5;
		tv.tv_usec=0;

		retval = select(maxfd+1, &rfds, NULL, NULL, &tv);
		if(retval ==-1 ){
			cout<<"SELECT 出错， 客户端程序退出"<<endl;
			break;
		}else if( retval==-0 ){
			cout<<"服务端没有输入任何信息，并且客户端也没有信息到来，waiting..."<<endl;
			continue;
		}else{
			
			if(FD_ISSET(client_fd, &rfds))
			{
				char buffer[1024];
				memset(buffer, 0, sizeof(buffer));
				int len = recv(client_fd, buffer, sizeof(buffer), 0);
				cout<<buffer;
			}

			if(FD_ISSET(0, &rfds))
			{
				char buf[1024];
				fgets(buf, sizeof(buf), stdin);
				send(client_fd, buf, sizeof(buf), 0);
			}

		}

	}

	close(client_fd);
	close(sockfd);
	return 0;

}












