// 练习 10.9
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#include<fstream>

using namespace std;

bool isShorter(const string &s1, const string &s2);

int main()
{
	ifstream in("data.txt");
	vector<string> vs;
	string s;
	while(in>>s)
		vs.push_back(s);
	
	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;
	sort(vs.begin(), vs.end());
	auto flag = unique(vs.begin(), vs.end());
	
	vs.erase(flag, vs.end());

	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;

	stable_sort(vs.begin(), vs.end(), isShorter);

	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;

}


bool isShorter(const string &s1, const string &s2)
{
	return s1.size()<s2.size();
}

