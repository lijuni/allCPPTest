//第六章 函数
#include<iostream>

using namespace std;


	int fact(int a)
	{
		if(a<1)
		{
			cout<<"输入值不正确，小于1"<<endl;
			return -1;
		}

		int sum=1;
		for(;a>=1;--a)
			sum*=a;
		return sum;
	}

	int fact2(int a)
	{
		if(a<1)
		{
			cout<<"输入值不正确，小于1"<<endl;
			return -1;
		}
		else if(a==1)
			return 1;
		else
			return a*fact(a-1);
	}

	int abs(int a)
	{
		return a>=0?a:-a;
	}

int main()
{

	int a;
	cin>>a;
	cout<<"Fact1 : "<<fact(a)<<endl;
	cout<<"Fact2 : "<<fact2(a)<<endl;
	cout<<"Abs   : "<<abs(a)<<endl;
}
