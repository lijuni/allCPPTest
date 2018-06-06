#include<iostream>
#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<fcntl.h>
#include<thread>
#include<list>
#include<string.h>

#define PORT 8000
#define IP "127.0.0.1"
#define QUEUE 20


using std::cout;
using std::endl;
using std::list;


int sockfd;
struct sockaddr_in server_sockaddr;
socklen_t len;
std::list<int> li;

void getConn()
{
	while(1)
	{
		int conn = accept(sockfd, (struct sockaddr*)&server_sockaddr,&len);
		li.push_back(conn);
		cout<<"CONN : "<<conn<<endl;
	}

}

void getData()
{
	struct timeval tv;
	tv.tv_sec = 2;
	tv.tv_usec = 0;

	while(1)
	{
		list<int>::iterator it;
		for(it = li.begin(); it!=li.end(); it++)
		{
			fd_set rfds;
			FD_ZERO(&rfds);
			int maxfd=0, retval=0;
			FD_SET(*it, &rfds);
			
			if(maxfd<*it)
				maxfd=*it;
		
			retval = select(maxfd+1, &rfds, NULL, NULL, &tv);
			
			if(retval==-1){
				cout<<"SELECT FAIL"<<endl;
				break;
			}else if(retval==0){
				cout<<"Wait Message..."<<endl;
				continue;
			}else{
				char recvbuf[1024];
				memset(recvbuf, 0, sizeof(recvbuf));
				int len = recv(*it, recvbuf, sizeof(recvbuf), 0);
				cout<<recvbuf;
			}
		}
		sleep(1);
	}
}


void sendMessage()
{
	while(1)
	{
		char sendbuf[1024];
		fgets(sendbuf, sizeof(sendbuf), stdin);
		//cin>>sendbuf;
		list<int>::iterator it;
		for(it=li.begin(); it!=li.end(); it++)
		{
			send(*it, sendbuf, sizeof(sendbuf), 0);
		}
	}

}


int main()
{
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	memset(&server_sockaddr, 0, sizeof(server_sockaddr));
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr(IP);
	//server_sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	
	if(bind(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0)
	{
		cout<<"BIND"<<endl;
		exit(-1);
	}
	
	if(listen(sockfd, QUEUE)<0)
	{
		cout<<"listen"<<endl;
		exit(-1);
	}
	
	len = sizeof(server_sockaddr);

	std::thread t1(getConn);
	t1.detach();

	std::thread t2(sendMessage);
	t2.detach();

	std::thread t3(getData);
	t3.detach();

	while(1){}

	return 0;


}












































