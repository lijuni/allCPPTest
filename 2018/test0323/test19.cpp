//P197 练习6.25
#include<iostream>

using namespace std;

int main(int argc, char *argv[])
{
	if(argc!=3)
	{
		cout<<"输入参数个数错误"<<endl;
		cout<<"Tips : 2 arguments"<<endl;
		return -1;
	}
	else
	{
		string temp=string(argv[1])+string(argv[2]);
		cout<<"argv[1]+argv[2]"<<endl;
		cout<<temp<<endl;
		return 0;
	}

}
