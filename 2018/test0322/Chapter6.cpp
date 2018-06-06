#ifndef _CHAPTER_CPP
#define _CHAPTER_CPP

#include<iostream>
#include"Chapter6.h"

using namespace std;

int fact1(int a)
{
	if(a==0)
		return 1;

	int sum=1;
	for(;a>=1;--a)
		sum*=a;
	cout<<"Change"<<endl;
	return sum;
}

int fact2(int a)
{
	if(a<=0)
		return 1;
	else
		return a*fact2(a-1);
}

#endif
