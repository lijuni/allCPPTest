#include<iostream>
using namespace std;

int main()
{
	int a[10]={};
	for(int i=0; i<10; i++)
		a[i]=i+1;

	for(auto i: a)
		cout<<i<<"  ";
	cout<<endl;

	for(int *p=a,*e=end(a); p!=e; p++)
		*p=0;

	for(auto i: a)
		cout<<i<<"  ";
	cout<<endl;
}
