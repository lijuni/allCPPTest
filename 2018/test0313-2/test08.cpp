#include<iostream>
using namespace std;

int main()
{
	int a[10]={};

	int *p1=a;
	int *p2=&a[0];
	int *p3=&a[0];

	cout<<"P1 "<<*p1<<endl;
	cout<<"P2 "<<*p2<<endl;
	cout<<"P3 "<<*p3<<endl;
}
