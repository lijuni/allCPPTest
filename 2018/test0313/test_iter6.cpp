//P99 3.22
#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{

	vector<string> vs;
	string temp;

	while(getline(cin, temp))
	{
		vs.push_back(temp);
	}

	for(auto it=vs.begin(); it!=vs.end()&&!it->empty(); it++)
	{
		for(auto it2=(*it).begin(); it2!=(*it).end(); it2++)
			*it2=toupper(*it2);
	}

	for(auto it=vs.cbegin(); it!=vs.cend(); it++)
		cout<<*it<<endl;

}
