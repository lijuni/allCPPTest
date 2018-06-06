#include<iostream>
#include<string>

using namespace std;

int main()

{
	string s;
	getline(cin, s);
	string s_end;
	
	for(decltype(s.size()) index=0; index<s.size(); index++)
	{
		if(!ispunct(s[index]))
		{
			//cout<<s[index]<<endl;
			s_end+=s[index];
		}
	}

	cout<<s_end<<endl;
	return 0;

}
