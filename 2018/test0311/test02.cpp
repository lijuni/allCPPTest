#include<iostream>
int main()
{
	int val=100;
	int val2=88;
	int *ip1=&val;
	int *ip2;
	ip2=&val;

	std::cout<<"ip1 = "<<*ip1<<std::endl;
	std::cout<<"ip2 = "<<*ip2<<std::endl;

	ip1=&val;
	ip2=&val2;

	std::cout<<"ip1 = "<<*ip1<<std::endl;
	std::cout<<"ip2 = "<<*ip2<<std::endl;

	ip1=ip2;
	*ip2=10;

	std::cout<<"ip1 = "<<*ip1<<std::endl;
	std::cout<<"ip2 = "<<*ip2<<std::endl;

	ip1++;

	std::cout<<"ip1 = "<<*ip1<<std::endl;
	std::cout<<"ip2 = "<<*ip2<<std::endl;

}
