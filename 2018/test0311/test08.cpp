#include<iostream>
int main()
{
	int i=100, *ip=&i, **ipp=&ip;
	std::cout<<"i="<<i<<" *ip="<<*ip<<" **ipp="<<**ipp<<std::endl;
	std::cout<<"ip="<<ip<<" *ipp="<<*ipp<<std::endl;	
}
