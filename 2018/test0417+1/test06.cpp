#include<iostream>
#include<string>
#include<map>

#define DEBUG

using namespace std;

int main()
{
	multimap<string, string> home;
	string s;
	while(getline(cin, s))
	{
		if(s=="-1")
			break;
		string xing;
		string name;
		auto it = s.begin();
		
		#ifndef DEBUG
		cout<<"s = "<<s<<endl;
		#endif

		while((*it)!=' ')
		{
			xing.insert(xing.end(),*it);
			it++;
		}
		while((*it)==' ')
		{
			it++;
		}
		while(it!=s.end())
		{
			name.insert(name.end(),*it);
			it++;
		}
	
		#ifndef DEBUG
		cout<<"姓 "<<xing<<"  名 "<<name<<endl;
		#endif
		home.insert({xing, name});	
	}
	for(auto temp : home)
	{
		cout<<"姓 "<<temp.first<<"  名 "<<temp.second<<endl;
	}

	while(cin>>s)
	{
		
		auto temp = home.find(s);
		auto count = home.count(s);

		
		while(count)
		{
			temp = home.erase(temp);
			
			--count;
		}

		//home.erase(s);

	for(auto temp2 : home)
	{
		cout<<"姓 "<<temp2.first<<"  名 "<<temp2.second<<endl;
	}

	}

}
