#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<iostream>

#define PORT 7001
#define BUFFER_SIZE 1024

int main()
{
	int socket_client = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in serveraddr;
	memset(&serveraddr, 0, sizeof(serveraddr));
	serveraddr.sin_family = AF_INET;
	serveraddr.sin_port = htons(PORT);
	serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	if( connect(socket_client, (struct sockaddr*)&serveraddr, sizeof(serveraddr))<0 )
	{
		std::cout<<"CONNECT ERROR"<<std::endl;
		exit(1);
	}

	char sendbuf[BUFFER_SIZE];
	char recvbuf[BUFFER_SIZE];
	std::string s;

	while(fgets(sendbuf, sizeof(sendbuf), stdin) !=NULL )
	//while(std::cin>>s)
	{
		//strcpy(sendbuf, s.c_str());
		send(socket_client, sendbuf, strlen(sendbuf), 0);
		//send(socket_client, s, (*s).size(), 0);
		recv(socket_client, recvbuf, sizeof(recvbuf), 0);
		fputs(recvbuf, stdout);
		memset(sendbuf, 0, sizeof(sendbuf));
		memset(recvbuf, 0, sizeof(recvbuf));
	}

	close(socket_client);
	return 0;








}

