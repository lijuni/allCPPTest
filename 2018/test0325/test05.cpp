#include<iostream>
using namespace std;

int fact(int val)
{
	if(val!=0)
		return val*fact(val-1);
	return 1;
}

int main()
{
	cout<<fact(-5)<<endl;
}
