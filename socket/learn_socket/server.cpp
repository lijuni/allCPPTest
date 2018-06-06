#include<sys/types.h>
#include<sys/socket.h>
#include<string.h>
#include<iostream>
#include<netinet/in.h>
#include<arpa/inet.h>

#define PORT 8000

int main()
{
	int sockfd;
	struct sockaddr_in my_addr;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	
	my_addr.sin_family = AF_INET;
	my_addr.sin_port = htons(PORT);
	my_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	
	bind(sockfd, (sockaddr *)&my_addr, sizeof(my_addr));


}
