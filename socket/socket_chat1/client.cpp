#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<iostream>

#define PORT 8000
#define BUFFER_SIZE 1024

using std::cout;
using std::endl;

int main()
{
	int client_fd;
	fd_set rfds;
	struct timeval tv;
	int retval, maxfd;

	client_fd = socket(AF_INET,SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	if( connect(client_fd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0 )
	{
		cout<<"CONNECT"<<endl;
		exit(-1);
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
		
		if(retval==-1)
		{
			cout<<"SELECT出错， 客户端程序退出"<<endl;
			break;
		}else if(retval==0){
			cout<<"客户端没有输入任何信息，并且服务器也没有信息到来，wait..."<<endl;
			continue;
		}else
		{
			if(FD_ISSET(client_fd, &rfds))
			{
				char recvbuf[BUFFER_SIZE];
				int len = recv(client_fd, recvbuf, sizeof(recvbuf), 0);
				cout<<recvbuf;
				memset(recvbuf, 0, sizeof(recvbuf));
			}
			
			if(FD_ISSET(0, &rfds))
			{
				char sendbuf[BUFFER_SIZE];
				fgets(sendbuf, sizeof(sendbuf), stdin);
				send(client_fd, sendbuf, strlen(sendbuf), 0);
				memset(sendbuf, 0, sizeof(sendbuf));
			}
		
		}

	}
	
	close(client_fd);
	return 0;
	

}








