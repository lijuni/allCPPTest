#include<iostream>
#include<string>

using namespace std;
using std::string;

int main()
{
	string s;
	getline(cin, s);
	
	/*
	for(decltype(s.size()) index=0; index<s.size(); index++)
	{
		if(isalnum(s[index]))
			s[index]='X';
	}
	*/

	decltype(s.size()) index=0;
	while(index<s.size())
	{
		if(isalnum(s[index]))
			s[index]='X';
		index++;
	}


	cout<<s<<endl;
}
