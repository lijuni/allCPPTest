#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	multimap<string, string> home;
	string s;
	while(getline(cin, s))
	{
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

}
