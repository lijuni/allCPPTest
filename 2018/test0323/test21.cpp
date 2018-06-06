//P199 第二个练习
#include<iostream>
#include<string>
using namespace std;

void err_msg(initializer_list<string> il)
{
	for(auto beg=il.begin(); beg!=il.end(); ++beg)
		cout<<*beg<<endl;
}

int main()
{
	err_msg({"error1", "error2", "error3"});	
	
}
