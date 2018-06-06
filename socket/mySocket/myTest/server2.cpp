#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
#include<string.h>

#define PORT 8000
#define QUEUE 20
#define IP "127.0.0.1"

using std::cout;
using std::endl;

int main()
{
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr(IP);

	if( bind(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0 )
	{
		cout<<"BIND"<<endl;
		exit(-1);
	}

	if( listen(sockfd, QUEUE)<0 )
	{
		cout<<"LISTEN"<<endl;
		exit(-1);
	}

	struct sockaddr_in client_sockaddr;
	socklen_t len = sizeof(client_sockaddr);

	int client_fd = accept(sockfd, (struct sockaddr*)&client_sockaddr, &len);
	
	if( client_fd<0 )
	{
		cout<<"ACCEPT"<<endl;
		exit(-1);
	}
	
	char buf[1024];

	while(1)
	{
		memset(buf, 0, sizeof(buf));
		recv(client_fd, buf, sizeof(buf), 0);
		cout<<buf;
	}
	
	close(client_fd);
	close(sockfd);
	return 0;

}











