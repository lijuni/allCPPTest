#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/shm.h>
#include<iostream>

#define PORT 8000
#define BUFFER_SIZE 1024

using std::cout;
using std::endl;

int main()
{
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	memset(&server_sockaddr, 0, sizeof(server_sockaddr));
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	if(connect(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0)
	{
		std::cout<<"CONNECT ERROR"<<std::endl;
		exit(1);
	}

	char sendbuf[BUFFER_SIZE];
	
	while(fgets(sendbuf, sizeof(sendbuf), stdin)!=NULL)
	{
		send(sockfd, sendbuf, strlen(sendbuf), 0);
		memset(sendbuf, 0, sizeof(sendbuf));
	}

	close(sockfd);
	return 0;

}












