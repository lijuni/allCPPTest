//P219 练习6.51
#include<iostream>
using namespace std;
using std::cout;

void f()
{
	cout<<"f : 0st"<<endl;
}

void f(int a)
{
	cout<<"f : 1st , int"<<endl;
}

void f(int a, int b)
{
	cout<<"f : 2st , int , int"<<endl;
}

void f(double a, double b=3.12)
{
	cout<<"f : 2st , double , double = 3.12"<<endl;
}

int main()
{
	//f(2.56,12);
	f(12);
	f(12,0);
	f(2.56,3.12);
	return 0;
}
