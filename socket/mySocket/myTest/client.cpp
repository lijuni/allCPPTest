#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<iostream>

#define PORT 8000
#define IP "127.0.0.1"

using std::cout;
using std::endl;

int main()
{
	int server_fd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	server_sockaddr.sin_addr.s_addr = inet_addr(IP);

	if( connect(server_fd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr))<0 )
	{
		cout<<"CONNECT"<<endl;
		exit(-1);
	}

	char sendbuf[1024];

	while(fgets(sendbuf, sizeof(sendbuf), stdin)!=NULL)
	{
		send(server_fd, sendbuf, strlen(sendbuf), 0);
		memset(sendbuf, 0, sizeof(sendbuf));
	}
	
	close(server_fd);
	return 0;


}










