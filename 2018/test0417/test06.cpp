#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
	string s;
	set<string> set_string;

	while(cin>>s)
	{
		//set_string.push_back(s);
		set_string.insert(s);
	}

	for(const auto &temp : set_string)
		cout<<temp<<"  ";
	cout<<endl;
}
