//P309 第一个练习题
#include<iostream>
#include<string>
#include<deque>
#include<fstream>
#include<list>
using namespace std;

int main()
{
	deque<string> deq;
	list<string> li;

	ifstream in("data.txt");
	string s;
	while(getline(in, s))
	{
		//deq.push_back(s);
		li.push_back(s);
	}

	//deque<string>::const_iterator it=deq.cbegin();
	list<string>::const_iterator itli=li.cbegin();

	for(; itli!=li.cend(); ++itli)
	{
		cout<<(*itli)<<endl;
	}



}
