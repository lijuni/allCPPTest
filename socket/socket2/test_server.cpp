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
#define QUEUE 20

int conn;

void thread_task() {}

int main()
{
	int ss = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr(INADDR_ANY);

	if(bind(ss, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))==-1)
	{
		std::cout<<"BIND ERROR"<<std::endl;
		exit(1);
	}

	if(listen(ss, QUEUE) == -1)
	{
		std::cout<<"LISTEN ERROR"<<std::endl;
		exit(1);
	}

	struct sockaddr_in client_sockaddr;
	socklen_t length = sizeof(client_sockaddr);

	conn = accept(ss, (struct sockaddr*)&client_sockaddr, &length);
	if(conn<0)
	{
		std::cout<<"ACCEPT"<<std::endl;
		exit(1);
	}

	char buffer[1024];

	while(1)
	{
		memset(buffer, 0, sizeof(buffer));
		int len = recv(conn, buffer, sizeof(buffer), 0);
		if(strcmp(buffer, "exit\n")==0) break;
		std::cout<<buffer<<std::endl;
		send(conn, buffer, len, 0);
	
	}

	close(conn);
	close(ss);
	return 0;


}














