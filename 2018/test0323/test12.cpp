#include<iostream>
using namespace std;

void print1(int *beg, int *end)
{
	cout<<"Print1"<<endl;
	while(beg!=end)
	{
		cout<<*(beg++)<<"   ";
	}
	cout<<endl;
}

void print2(int *a, int n)
{
	cout<<"Print2"<<endl;
	for(int i=0; i<n; ++i)
		cout<<a[i]<<"   ";
	cout<<endl;
}

void print_single(int a)
{
	cout<<"Print_Single"<<endl;
	cout<<a<<endl;
}

int main()
{
	int i=0, j[2]={1,2};
	print_single(i);
	print1(begin(j),end(j));
	print1(j,end(j));
	print2(j,2);
}
