//P312 第一个练习题
#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> li;
	for(int i=0; i<=10; i++)
		li.push_back(i);
	
	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

	auto it=li.begin();
	++it;
	//auto it1=li.begin();
	//++it1, ++it1;
	auto it1=li.end();

	it=li.erase(it1, it1);
	cout<<endl<<"*it "<<(*it)<<endl;

	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

}
