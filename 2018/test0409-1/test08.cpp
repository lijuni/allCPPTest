#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main()
{
	vector<string> vs={"vs01", "vs02", "vs03"};
	list<string> ls={"ls01", "ls02", "ls03"};

	vs.insert(vs.begin(), "hello");
	ls.insert(ls.begin(),vs.begin(), vs.end());

	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;
	for(auto temp : ls)
		cout<<temp<<" ";
}
