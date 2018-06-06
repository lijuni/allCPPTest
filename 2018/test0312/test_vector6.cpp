#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
	vector<string> vs;
	string s_temp;
	while(getline(cin, s_temp))
	{
		vs.push_back(s_temp);
	}

	std::cout<<endl<<endl;
	
	for(auto s_temp : vs)
		std::cout<<s_temp<<"  ";

	std::cout<<endl<<endl;

	for(auto &s_temp : vs)
	{
		//s_temp=toupper(s_temp);
		for(auto &c : s_temp)
			c=toupper(c);
	
	}

	std::cout<<endl<<endl;
	
	for(auto s_temp : vs)
		std::cout<<s_temp<<endl;

}
