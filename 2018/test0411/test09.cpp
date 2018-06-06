// 练习 10.13
#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#include<fstream>
using namespace std;

bool biger_than_five(const string &s)
{
	return s.size()>=5;
}

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

	auto flag = partition(vs.begin(), vs.end(), biger_than_five);

	for(auto beg = vs.begin(); beg!=flag; beg++)
		cout<<*beg<<" ";
	cout<<endl;

}
