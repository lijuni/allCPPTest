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
		++words[s];
	}

	for(auto temp : words)
	{
		cout<<"string : "<<temp.first <<"  count : "<<temp.second<<endl;
	}

}
