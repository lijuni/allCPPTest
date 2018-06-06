#include<iostream>
using namespace std;
int main()
{
	int a=0,b=0;
	std::cout<<"Please Input 2 Number"<<std::endl;
	std::cin>>a>>b;
	if(a>b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	for(;a<=b;a++)
		std::cout<<a<<std::endl;
	return 0;
}
