#include<iostream>
#include<string>
#include<unistd.h> //delay延时函数
#include<thread>
#include<random>

#include"qiandao.h"

//using namespace std;

void shangban(Employee &e, int i);

int main()
{
	default_random_engine e;
	e.seed(time(0));
	uniform_int_distribution<unsigned> u (0,100);
	//for(int i=0; i<10; i++)
		//std::cout<<u(e)<<std::endl;
	
	
	Employee e1("hang", 23, 200);
	Employee e2("gao", 33, 2000);
	Employee e3("yang", 29, 800);
	
	//thread t1(shangban, std::ref(e1), u(e));//ref 非常重要
	//thread t2(shangban, std::ref(e2), u(e));
	//thread t3(shangban, std::ref(e3), u(e));
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
}


void shangban(Employee &e, int i)
{
	e.QD();
	sleep(i);
	e.QT();
	e.showSalary();
}


