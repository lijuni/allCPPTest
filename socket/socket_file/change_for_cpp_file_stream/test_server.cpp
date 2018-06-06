/*
 * 2018/06/01
 * 测试 socket 传输文本文件
 * 主要学习socket 的使用
 * By Lee
 */

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<signal.h>
#include<fcntl.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<unistd.h>
#include<string.h>
#include<string>
#include<iostream>

#define PORT 8000

using namespace std;

void sys_err(string s, int num)
{
	std::cout<<"ERROR "<<s<<std::endl;
	exit(num);
}

int main(int argc, char **argv)
{
	signal(SIGPIPE, SIG_IGN);
	int sockfd, acceptfd;
	struct sockaddr_in serverAddr, clientAddr;
	socklen_t len;

	memset(&serverAddr, 0, sizeof(serverAddr));
	memset(&clientAddr, 0, sizeof(serverAddr));

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd<0)
		sys_err("socket", -1);

	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(PORT);
	serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);

	if( bind(sockfd, (struct sockaddr*)&serverAddr, sizeof(serverAddr)) <0 )
	{
		sys_err("BIND", -2);
	}

	if( listen(sockfd, 128)<0 )
	{
		sys_err("LISTEN", -3);
	}

	while(1)
	{
		char buf[1024];
		len = sizeof(clientAddr);
		acceptfd = accept(sockfd, (struct sockaddr*)&clientAddr, &len);
		if(acceptfd<0)
		{
			if(errno == EINTR)
				continue;
			else
				sys_err("ACCEPT", -4);
		}
		memset(buf, 0x00, sizeof(buf));
		int filefd = open("copy.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
		while(1)
		{
			if(filefd<0)
				sys_err("FILE", -5);
			int len = read(acceptfd, buf, sizeof(buf));
			if( len == 0 )
			{
				cout<<"READ END!"<<endl;
				break;
			}
			if( len == -1 && errno == EINTR)
				continue;
			if( len==-1 )
				break;
			write(filefd, buf, len);
		}
		close(filefd);
		close(acceptfd);
	}





}















