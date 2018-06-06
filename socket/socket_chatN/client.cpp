#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<iostream>

using std::cout;
using std::endl;

#define PORT 8000
#define IP "127.0.0.1"
#define BUFFER_SIZE 1024

int main()
{
	int sockfd;
	fd_set rfds;
	struct timeval tv;
	int retval, maxfd;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr(IP);

	if( connect(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0 )
	{
		cout<<"CONNECT"<<endl;
		exit(1);
	}

	while(1)
	{
		FD_ZERO(&rfds);
		FD_SET(0, &rfds);
		FD_SET(sockfd, &rfds);
		maxfd = 0;
		if(maxfd<sockfd)
			maxfd = sockfd;

		tv.tv_sec = 5;
		tv.tv_usec = 0;

		retval = select(maxfd+1, &rfds, NULL, NULL, &tv);

		if(retval==-1){
			cout<<"SELECT FAIL"<<endl;
			break;
		}else if( retval==0 ){
			cout<<"Wait data..."<<endl;
			continue;
		}else{
			
			if(FD_ISSET(sockfd, &rfds))
			{
				char recvbuf[BUFFER_SIZE];
				int len = recv(sockfd, recvbuf, sizeof(recvbuf), 0);
				cout<<recv;
				memset(recvbuf, 0, sizeof(recvbuf));

			}
			
			if(FD_ISSET(0, &rfds))
			{
				char sendbuf[BUFFER_SIZE];
				fgets(sendbuf, sizeof(sendbuf), stdin);
				send(sockfd, sendbuf, strlen(sendbuf), 0);
				memset(sendbuf, 0, sizeof(sendbuf));
			}

		}

	}
	
	close(sockfd);
	return 0;



}






















