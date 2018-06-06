//P192 第二个练习
#include<iostream>
#include<string>

using namespace std;

bool has_upper(const string &s)
{
	for(auto temp : s)
	{
		if(isupper(temp))
			return true;
	}
	return false;
}

void to_lower(string &s)
{
	for(auto &temp : s)
	{
		if(!isspace(temp)&&isupper(temp))
			temp=tolower(temp);
	}
}

int main()
{
	string s;
	getline(cin, s);
	
	cout<<"Has Upper  "<<has_upper(s)<<endl;

	to_lower(s);

	cout<<"After to Lower "<<endl<<s<<endl;

}
