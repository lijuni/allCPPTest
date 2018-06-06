#include<iostream>
#include<functional>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz)
{
	return s.size()>=sz;
}

void show(const vector<string> &vs)
{
	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;
	cout<<endl;
}

int main()
{
	ifstream in("data.txt");
	vector<string> vs;
	string s;
	int sz = 6;

	while(in>>s)
		vs.push_back(s);
	cout<<"input  = ";
	show(vs);

	sort(vs.begin(), vs.end());
	cout<<"sort   = ";
	show(vs);

	auto new_end = unique(vs.begin(), vs.end());
	cout<<"unique = ";
	show(vs);

	vs.erase(new_end, vs.end());
	cout<<"erase  = ";
	show(vs);

	stable_sort(vs.begin(), vs.end(), [](const string &s1, const string &s2) { return s1.size()<s2.size(); } );
	cout<<"length = ";
	show(vs);

	auto wc = find_if(vs.begin(), vs.end(), bind(check_size, _1, sz));
	cout<<"find  :  "<<*wc<<endl;

}


















