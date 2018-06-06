// 练习9.28
#include<iostream>
#include<string>
#include<forward_list>

using namespace std;

bool find_and_insert(forward_list<string> &fl, string s1, string s2);

void show(const forward_list<string> &fl);

int main()
{
	forward_list<string> fl{"string1", "string2", "string3"};
	//string s1 = "string2";
	string s1 = "string";
	string s2 = "insert";
	
	show(fl);
	find_and_insert(fl, s1, s2);
	show(fl);
	
}

bool find_and_insert(forward_list<string> &fl, string s1, string s2)
{
	auto prev = fl.before_begin();
	auto curr = fl.begin();

	while(curr!=fl.end())
	{
		if((*curr)==s1)
		{
			fl.insert_after(curr, s2);
			return true;
		}
		else
		{
			prev = curr;
			++curr;
		}
	}
	fl.insert_after(prev, s2);
	return true;
}



void show(const forward_list<string> &fl)
{
	for(auto temp : fl)
		cout<<temp<<" ";
	cout<<endl;

}
