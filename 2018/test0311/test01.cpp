#include<iostream>
using namespace std;
int main()
{
	int *ip1, *ip2;
	int dp, *dp2;

	int ival=42;
	int *ip3= &ival;
	int pd=5;
	int *ip5=&pd;
	int *ip6;
	ip6=&pd;
	*ip6=10;

	int &ref=pd;
	
	int *ip8=NULL;

	int *ip9=0;

	std::cout<<ip8<<std::endl;
	std::cout<<ip9<<std::endl;

	int *ip10=0;
	int *ip12=&pd;
	std::cout<<*ip12<<std::endl;
	
	if(ip10)
		std::cout<<"True"<<std::endl;
	else
		std::cout<<"False"<<std::endl;

	if(ip12)
		std::cout<<"True"<<std::endl;
	else
		std::cout<<"False"<<std::endl;

	int *ip15=&pd;
	void *vp=&pd;
	vp=ip15;




}
