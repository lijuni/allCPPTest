//P308 例子：使用insert的返回值
#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	list<string> ls;

	list<string>::iterator iter=ls.begin();

	string word;
	while(cin>>word)
	{
		//iter=ls.insert(iter, word);
		//ls.insert(iter, word);
		ls.insert(ls.begin(), word);
	}

	for(auto temp : ls)
		cout<<temp<<" ";
	cout<<endl;

}
