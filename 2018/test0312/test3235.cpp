#include<iostream>
#include<string>

using namespace std;

int main()
{
	const string s="Hello CPP";
	
	for(auto &c : s)
		cout<<c<<endl;
}
