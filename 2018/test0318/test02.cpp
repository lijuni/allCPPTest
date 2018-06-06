#include<iostream>
using namespace std;

int main()
{
	int x[10], *p=x;
	cout<< sizeof(x)/sizeof(*x)<<endl;
	cout<< sizeof(p)/sizeof(*p)<<endl;

	cout<<"*x "<< *x <<endl;
	cout<<"p "<< sizeof(p) <<endl;
	cout<<"*p "<< *p <<endl;
}
