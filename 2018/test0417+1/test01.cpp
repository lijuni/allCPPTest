#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, size_t> words;
	string s;

	while(cin>>s)
	{
		auto res = words.insert({s, 1});
		
		if( !res.second )
		{
			++(res.first->second);
		}
	}

	for(auto temp : words)
	{
		cout<< temp.first <<"  :  "<<temp.second<<endl;
	}

}
