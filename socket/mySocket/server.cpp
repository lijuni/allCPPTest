#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<netinet/in.h>
#include<arpa/inet.h>//htons
#include<unistd.h>//close
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/shm.h>
#include<thread>
#include<iostream>

#define PORT 7001
#define QUEUE 20

//using namespace std;

int conn;

void thread_task(){}

int main()
{
	int ss = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	//htons的功能：将一个无符号短整型的主机数值转换为网络字节顺序，即大尾顺序(big-endian)
	//参数u_short hostshort：16位无符号整数
	//返回值：TCP/IP网络字节顺序.
	//#include <arpa/inet.h>
	server_sockaddr.sin_addr.s_addr = htonl(INADDR_ANY);
	//INADDR_ANY 是 0.0.0.0 指代本机

	if( bind(ss, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))==-1 )
	{
		std::cout<<"BIND  FAILED"<<std::endl;
		exit(1);
	}
	if( listen(ss, QUEUE)==-1 )
	{
		std::cout<<"LISTEN FAILED"<<std::endl;
		exit(1);
	}

	struct sockaddr_in client_addr;

	socklen_t length = sizeof(client_addr);
	conn = accept(ss, (struct sockaddr*)&client_addr, &length);
	
	if(conn<0)
	{
		std::cout<<"CONNECT FAILED"<<std::endl;
		exit(1);
	}

	char buffer[1024];


	while(1)
	{
		memset(buffer, 0, sizeof(buffer));
		int len = recv(conn, buffer, sizeof(buffer), 0);
		if(strcmp(buffer, "exit\n")==0)
			break;
		printf("%s", buffer);
		send(conn, buffer, len, 0);
	}

	close(conn);
	close(ss);
	return 0;

}
