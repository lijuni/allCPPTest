#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<numeric>

using namespace std;

void show(vector<string>  vs)
{
	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;
}

int main()
{
	string s;
	map<string , vector<string>> home;

	while(getline(cin, s))
	{
		if(s.empty())
			continue;
		string::iterator its = s.begin();
		string xing;
		string name;
		while((*(its))!=' ')
		{
			//xing.insert((*its));
			xing.insert(xing.end(), *its);
			its++;
		}
		while((*its)==' ')
		{
			its++;
		}
		while(its!=s.end())
		{
			name.insert(name.end(), *its);
			its++;
		}

		//cout<<"xing "<<xing<<endl;
		//cout<<"name "<<name<<endl;
		
		home[xing].push_back(name);
	}

	for(const auto &temp : home)
	{
		cout<<"姓 "<<temp.first<<endl;
		cout<<"名 ";
		show(temp.second);
	
	}

}
