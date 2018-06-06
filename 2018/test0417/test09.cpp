//P381 最后一个练习
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<numeric>

#define DEBUG

using namespace std;

void show( vector<pair<string, string>> vp)
{
	for(const auto &temp : vp)
	{
		cout<<"name "<<temp.first<<"  ";
		cout<<"  birth "<<temp.second<<"  "<<endl;
	}
	cout<<endl;
}

int main()
{
	string s;
	map<string , vector<pair<string, string>>> home;

	while(getline(cin, s))
	{
		if(s.empty())
			continue;
		
		#ifndef DEBUG
		cout<<"s "<<s<<endl;
		#endif
		
		string::iterator its = s.begin();
		string xing;
		string name;
		string birth;
		while((*(its))!=' ')
		{
			//xing.insert((*its));
			xing.insert(xing.end(), *its);
			its++;
			#ifndef DEBUG
			cout<<"xing "<<xing<<endl;
			#endif
		}
		while((*its)==' ')
		{
			its++;
		}
		while((*(its))!=' ')
		{
			name.insert(name.end(), *its);
			its++;
			#ifndef DEBUG
			cout<<"name "<<name<<endl;
			#endif
		}
		while((*its)==' ')
		{
			its++;
		}
		while(its!=s.end())
		{
			birth.insert(birth.end(), *its);
			its++;
			#ifndef DEBUG
			cout<<"birth "<<birth<<endl;
			#endif
		}

		//cout<<"xing "<<xing<<endl;
		//cout<<"name "<<name<<endl;
		pair<string, string> temp = {name, birth};
		home[xing].push_back(temp);
	}

	for(const auto &temp : home)
	{
		cout<<"姓 "<<temp.first<<endl;
		cout<<"名 ";
		show(temp.second);
	
	}

}
