#include<iostream>
using namespace std;

int main()
{
	int a[10];
	for(int i=0; i<10; i++)
		a[i]=i+1;

	int *h=a;
	int *e=&a[10];
	
	//int *h1=begin(a);
	//int *e1=end(a);

	for(int *h1=begin(a),*e1=end(a) ;h1!=e1; h1++)
	{
		cout<<*h1<<"  ";
	}
}
