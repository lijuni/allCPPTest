#include<iostream>
using namespace std;

void int_calls(int x)
{
	//cout<<"x = "<<x<<endl;
	static int flag=0;
	cout<<flag<<endl;
	++flag;
}

int int_calls2(int x)
{
	//cout<<"x = "<<x<<endl;
	static int flag=0;
	//cout<<flag<<endl;
	//++flag;
	return flag++;
}

int main()
{
	for(int i=0; i<10; i++)
	{	
		int_calls(i);
		cout<<"call2 : "<<int_calls2(i)<<endl;

	}
	//cout<<"Flag = "<<flag<<endl;
}

