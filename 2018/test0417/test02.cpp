#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>

using namespace std;

int main()
{
	map<string, size_t> words;
	set<string> noNeed{"a", "A", "the", "The", "and"};
	set<char> hulue{',', '.', ';'};
	string s;

	while(cin>>s)
	{
		if(noNeed.find(s)==noNeed.end())
		{
			transform(s.begin(), s.end(), s.begin(),  ::toupper);
			for(auto it = s.begin(); it!=s.end(); ++it)
			{
				//cout<<"s = "<<s<<endl;
				if(hulue.find(*it)!=hulue.end())
				{
					//cout<<"Find"<<endl;
					it = s.erase(it);
					if(it==s.end())
					{
						//cout<<"END"<<endl;
						break;
					}
					//cout<<"CHange : "<<s<<endl;
					//s.erase(it);
					//it=s.begin();
				}
			}
			
			++words[s];
		}
	}	

	for(const auto &temp : words)
	{
		cout<<temp.first<<"  出现了  "<<temp.second<<"  "<<((temp.second>1)?"time":"times")<<endl;
	}

}
