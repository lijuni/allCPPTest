#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	for(decltype(s.size()) index=0; index!=s.size(); index++)
	{
		if(!isspace(s[index]))
			s[index]=toupper(s[index]);
		cout<<"change"<<endl;
	}
	cout<<s<<endl;
}
