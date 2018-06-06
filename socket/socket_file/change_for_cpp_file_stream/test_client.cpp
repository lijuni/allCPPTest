/*
 * 2018/06/01
 * 测试 socket 传输文本文件
 * 主要学习socket 的使用
 * By Lee
 */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<sys/shm.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<errno.h>
#include<unistd.h>
#include<fstream>

#include"global_var"

#define MAXSIZE 1024

//#define IP "127.0.0.1"
//#define PORT 8000

using namespace std;

void sys_err(const char *ptr, int num)
{
	cout<<*ptr<<endl;
	exit(num);
}

int main(int argc, char **argv)
{
	int sockfd;
	char buf[MAXSIZE];
	struct sockaddr_in client_addr;
	ifstream ifs;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd<0)
		sys_err("socket", -1);
	
	memset(&client_addr, 0, sizeof(client_addr));
	
	client_addr.sin_family = AF_INET;
	client_addr.sin_port = htons(PORT);
	client_addr.sin_addr.s_addr = inet_addr(IP);

	if( connect(sockfd, (struct sockaddr*)&client_addr, sizeof(client_addr))<0 )
		sys_err("connect", -2);

	const char *src_file = argv[1];
	cout<<"*src_file  "<<src_file<<endl;
	ifs.open(src_file);

	while(1)
	{
		string s;
		while(getline(ifs, s))
		{
			strcpy(buf, s.c_str());
			int len = strlen(buf);
			send(sockfd, buf, len, 0);
		}
		ifs.close();
	}

}





















