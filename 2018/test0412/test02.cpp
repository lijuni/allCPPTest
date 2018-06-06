// 练习 10.20 ->
#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
	int value=10;

	auto f = [value]() mutable -> bool 
	{ 
		cout<<"value = "<<value<<endl;
		if(value == 0)
			return false;
		else
		{
			--value;
			return true;
		}
	};

	while(f());
	cout<<"END"<<endl;

}
