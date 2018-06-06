#include<iostream>
#include<string>
#include<string.h>
#include<unistd.h> //delay延时函数
#include<thread>
#include<random>
#include<sstream>
#include<vector>
#include<map>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<fcntl.h>

#include"qiandao.h"

//using namespace std;

#define PORT 8000
#define QUEUE 20

using std::vector;
using std::map;

void shangban(Employee &e, int i);

int main()
{
	default_random_engine e;
	e.seed(time(0));
	uniform_int_distribution<unsigned> u (0,100);
	Employee e1("hang", 23, 200);
	Employee e2("gaoee", 33, 2000);
	Employee e3("yang", 29, 800);
	Gaogong g1("gao", 51, 3000, 10000);

	vector<Employee*> ve{&e1, &e2, &e3};
	ve.push_back(&g1);

	map<string, Employee*> me;
	me.insert(pair<string, Employee*>(e1.getName(), &e1));
	me.insert(pair<string, Employee*>(e2.getName(), &e2));
	me.insert(pair<string, Employee*>(e3.getName(), &e3));
	me.insert(pair<string, Employee*>(g1.getName(), &g1));

	//Employee *lalal = new Employee("lalal", 25, 100);
	//me.insert(pair<string, Employee*>("lalala", &e1));
	me.insert(pair<string, Employee*>("lalal", new Employee("lalal", 25, 100)));

	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	struct sockaddr_in server_sockaddr;
	server_sockaddr.sin_family = AF_INET;
	server_sockaddr.sin_port = htons(PORT);
	//server_sockaddr.sin_addr.s_addr = inet_addr(INADDR_ANY);
	server_sockaddr.sin_addr.s_addr = inet_addr("127.0.0.1");

	if(bind(sockfd, (struct sockaddr*)&server_sockaddr, sizeof(server_sockaddr)) == -1)
	{
		std::cout<<"BIND ERROR"<<std::endl;
		exit(1);
	}

	if(listen(sockfd, QUEUE) == -1)
	{
		std::cout<<"LISTEN ERROR"<<std::endl;
		exit(1);
	}
	struct sockaddr_in client_sockaddr;
	socklen_t length = sizeof(client_sockaddr);
	int conn = accept(sockfd, (struct sockaddr*)&client_sockaddr, &length);
	if(conn<0)
	{
		std::cout<<"CONNECT ERROR"<<std::endl;
		exit(1);
	}

	char buffer[1024];
	
	while(1)
	{
		string name, state;
		memset(buffer, 0, sizeof(buffer));
		int len = recv(conn, buffer, sizeof(buffer), 0);
		printf("%s", buffer);
		istringstream is(buffer);
		//is>>name>>state;
		is>>name;
		//if(strcmp(name.c_str(), "exit\n")==0)
		if(name=="exit")
		{
			std::cout<<"退出"<<std::endl;
			break;
		}
		else if(name == "test")
		{
			for(auto temp : ve)
				temp->showSalary();
				//temp->showCount();
		}
		else if(name == "salary")
		{
			e1.showSalary();
			e2.showSalary();
			e3.showSalary();
			g1.showSalary();
		}
		else if(name == "insert")
		{
			string name_temp;
			int age_temp;
			double salary_temp;
			cout<<"输入插入数据"<<endl;
			//cin.clear();
			//cin>>name_temp>>age_temp>>salary_temp;
			//不知道为什么，上面这句话一直没有执行成功
			/*
			string temp;
			getline(cin,temp);
			cout<<"输入完成了"<<endl;
			istringstream iss;
			iss.str(temp);
			iss>>name_temp>>age_temp>>salary_temp;
			*/
			is>>name_temp>>age_temp>>salary_temp;
			cout<<name_temp<<" "<<age_temp<<"  "<<salary_temp<<endl;
			me.insert(pair<string, Employee*>(name, new Employee(name_temp, age_temp, salary_temp)));
		}
		else
		{
			is>>state;
			cout<<"State "<<state<<endl;
			
			if(state == "show")
			{
				map<string,Employee*>::iterator it;
			
				for(it = me.begin(); it!=me.end(); it++)
					cout<<it->first<<endl;
			
				auto it2 = me.find(name);
				if(it2!=me.end())
				{
					cout<<"找到了"<<it2->second->getName()<<endl;
				}

			}
			else
			{
				if(state=="QD")
				{
					if(name == "e1")
						e1.QD();
					else if(name == "e2")
						e2.QD();
					else if(name == "e3")
						e3.QD();
					else if(name == "g1")
						g1.QD();
				}
			
				if(state=="QT")
				{
					if(name == "e1")
						e1.QT();
					else if(name == "e2")
						e2.QT();
					else if(name == "e3")
						e3.QT();
					else if(name == "g1")
						g1.QT();
				}
				if(state=="show")
				{
					if(name == "e1")
						e1.showCount();
					else if(name == "e2")
						e2.showCount();
					else if(name == "e3")
						e3.showCount();
					else if(name == "g1")
						g1.showCount();
				}
			}
		}


		std::cout<<"Name:"<<name<<" State:"<<state<<std::endl;
		//std::cout<<buffer<<std::endl;
		send(conn, buffer, len, 0);
	}
	close(conn);
	std::cout<<"即将关闭系统"<<std::endl;
	/*

	Employee e1("hang", 23, 200);
	Employee e2("gao", 33, 2000);
	Employee e3("yang", 29, 800);
	
	thread t1(shangban, ref(e1), u(e));//ref 非常重要
	thread t2(shangban, ref(e2), u(e));
	thread t3(shangban, ref(e3), u(e));
	t1.join();
	t2.join();
	t3.join();
	std::cout<<endl<<std::endl;

	e1.showSalary();
	e2.showSalary();
	e3.showSalary();
	*/
	
}


void shangban(Employee &e, int i)
{
	e.QD();
	sleep(i);
	e.QT();
	e.showSalary();
}


