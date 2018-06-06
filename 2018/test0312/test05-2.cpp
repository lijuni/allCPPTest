#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	getline(cin, s);
	
	for(decltype(s.size()) index = 0; index<=s.size()&&!isspace(s[index]); index++)
	{
		if(islower(s[index]))
			s[index]=toupper(s[index]);
	}
	cout<<s<<endl;

}
