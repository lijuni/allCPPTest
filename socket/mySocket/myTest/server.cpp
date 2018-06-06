#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<fcntl.h>
#include<string.h>
#include<iostream>
#include<netinet/in.h>
#include<unistd.h>

#define PORT 8000
#define QUEUE 20

using std::cout;
using std::endl;

int main()
{
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	if( bind(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0 )
	{
		cout<<"BIND"<<endl;
		exit(-1);
	}

	if( listen(sockfd, QUEUE)==-1 )
	{
		cout<<"LISTEN"<<endl;
		exit(-1);
	}

	struct sockaddr_in client_sockaddr;
	socklen_t length = sizeof(client_sockaddr);

	int client_fd = accept(sockfd, (struct sockaddr*)&client_sockaddr, &length);
	if(client_fd<0)
	{
		cout<<"ACCEPT"<<endl;
		exit(-1);
	}
	char buffer[1024];

	while(1)
	{
		memset(buffer, 0, sizeof(buffer));
		int len = recv(client_fd, buffer, sizeof(buffer),0);
		cout<<buffer;
	}

	close(client_fd);
	close(sockfd);
	return 0;











}


















