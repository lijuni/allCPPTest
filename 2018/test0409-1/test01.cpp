//9.2.5节练习
#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<char*> lc{"Hello"};
	vector<string> vs;

	cout<<"list : "<<endl;
	for(auto temp : lc)
		cout<<temp<<endl<<endl;
	cout<<"vector : "<<endl;
	for(auto temp : vs)
		cout<<temp<<endl<<endl;

	vs.assign(lc.begin(), lc.end());
	cout<<"list : "<<endl;
	for(auto temp : lc)
		cout<<temp<<endl<<endl;
	cout<<"vector : "<<endl;
	for(auto temp : vs)
		cout<<temp<<endl<<endl;


}


