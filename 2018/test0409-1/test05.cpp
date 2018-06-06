//P306 push_front 支持list,forward_list,deque
#include<iostream>
#include<string>
#include<list>


#define DEBUG

using namespace std;

int main()
{
	list<int> li{1,2,3};
	string s="HelloCPP";

	for(int i=3; i>=0; --i)
	{
	
	#ifndef DEBUG
		cout<<"i="<<i<<endl;
	#endif
		li.push_front(i);
		//s.push_front(i);
	}

	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

	cout<<"STRING : "<<s<<endl;

}
