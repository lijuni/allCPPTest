#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int i;
	cout<<"SIZE of int : "<<sizeof(i)<<endl;

	long l;
	cout<<"SIZE of long : "<<sizeof(l)<<endl;

	double d;
	cout<<"SIZE of double : "<<sizeof(d)<<endl;

	int a[5];
	cout<<"SIZE of int a[5] : "<<sizeof(a)<<endl;

	string str;
	cout<<"SIZE of string : "<<sizeof(str)<<endl;

	vector<int> vi;
	cout<<"SIZE of vector : "<<sizeof(vi)<<endl;

}
