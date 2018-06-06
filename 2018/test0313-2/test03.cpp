#include<iostream>
using namespace std;

int main()
{
	int a[10]={};

	for(int i=0; i<10; i++)
		a[i]=i;

	for(auto i : a)
		cout<<i<<" ";

	cout<<endl;

	int b[10];

	for(size_t i=0; i<10; i++)
		b[i]=a[i];

	for(auto i : b)
		cout<<i<<" ";

}
