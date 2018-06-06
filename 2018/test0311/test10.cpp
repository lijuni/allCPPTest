#include<iostream>
#include"externConst.h"
int main()
{
	const int bufSize=512;
	const int j=bufSize;
	int k=j;
	//std::cout<<i<<std::endl;
	k=99;
	const int m=k;

	const double pi=3.15;
	const double *ptr=&pi;
	std::cout<<*ptr<<std::endl;
	
	double dd=1.23;
	const double *ptrd=&dd;
	std::cout<<*ptrd<<std::endl;

	const double *ptr1;
	ptr=&dd;

	double *const ptr2=&dd;

	int i=10, &r=i;
	
	const double *const ptr3=&dd;

	const int i2=9, &r2=i2;

	//int i3, *const cp;

	const int v1=0, &rv1=v1;
	//int &rv1=v1;
}
