// P357 bind 第一个练习
#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
#include<fstream>
#include<functional>
using namespace std;
using namespace std::placeholders;
//using std::placeholders::_1;

bool smaller_than_sz(const string &s, int sz)
{
	return s.size()<=sz;
}
		
int main()
{
	ifstream in;
	in.open("data.txt");
	vector<string> vs;
	string s;
	int sz = 5;

	while(in>>s)
		vs.push_back(s);

	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;

	//int cnt = count_if(vs.begin(), vs.end(), [sz](const string &s) { return s.size()<=sz; } );
	int cnt = count_if(vs.begin(), vs.end(), bind(smaller_than_sz, _1, sz)  );

	cout<<"Size <= "<<sz<<"  :  "<<cnt<<endl;

}
