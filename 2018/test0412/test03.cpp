#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
	int value = 10;

	//auto f = [value]() mutable -> bool
	auto f = [&value]() -> bool
	{
		cout<<"value = "<<value<<endl;
		if(value!=0)
		{
			--value;
			return true;
		}
		else
			return false;
	};

	while(f());
	cout<<"END"<<endl;

}
