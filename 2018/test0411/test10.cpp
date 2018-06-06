#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#include<fstream>
using namespace std;

int test_lambda(int a, int b)
{
	auto f =  ([a, b]()  { return (a+b) ;} );
	return f();
}

int test_lambda1(int a, int b)
{
	auto f = [](int a, int b) { return a+b; };
	return f(a, b);
}

int test_lambda2(int a, int b)
{
	auto f = [a](int b) { return a+b; };
	return f(b);
}

int main()
{
	cout<<"lambda1 : "<< test_lambda1(2, 8)<<endl;
	cout<<"lambda2 : "<< test_lambda2(2, 8)<<endl;
}
