#include<iostream>
using namespace std;

void change1(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void change2(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

void change_old(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=1,b=2;
	
	change1(&a, &b);
	cout<<"CHANGE * , a = "<<a<<"  b = "<<b<<endl;
	a=1,b=2;
	
	change2(a, b);
	cout<<"CHANGE & , a = "<<a<<"  b = "<<b<<endl;
	a=1,b=2;
	
	change_old(a, b);
	cout<<"CHANGE old , a = "<<a<<"  b = "<<b<<endl;
}
