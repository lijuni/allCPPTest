#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
	unordered_map<string, size_t> words;
	string s;
	while(cin>>s)
	{
		++words[s];
	}

	for(auto temp : words)
	{
		cout<<temp.first<<"  "<<temp.second<<endl;
	}
}
