#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	if(a==b)
		return;
	else
	{
		int temp=a;
		a=b;
		b=temp;
	}
}

int main()
{
	int a=0,b=0;
	cout<<"a="<<a<<" b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<" b="<<b<<endl;
	return 0;	
}
