#include<iostream>
int main()
{
	int i=100;
	int *p=&i;
	int *&r=p;
	std::cout<<"*r="<<*r<<std::endl;
	
	int j=8;
	r=&j;
	std::cout<<"*r="<<*r<<std::endl;
	*r=108;
	std::cout<<"*r="<<*r<<std::endl;

}
