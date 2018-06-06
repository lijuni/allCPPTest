#include<iostream>
int main()
{
	int i=100, *ip=&i, &r=i;
	std::cout<<"i = "<<i<<" *ip = "<<*ip<<" r = "<<r<<std::endl;
	//std::cout<<"&r = "<<&r<<std::endl;
	//return 0;
	
	int* ip2=&i, i2=8;
	std::cout<<"*ip2 = "<<*ip2<<" i2 = "<<i2<<std::endl;

}
