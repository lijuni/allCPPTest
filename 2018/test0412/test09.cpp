// P359 第二个练习
#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<numeric>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
	ifstream in;
	in.open("data.txt");
	string s;
	vector<string> vs;
	list<string> ls;
	list<string> ls1;
	list<string> ls2;

	while(in>>s)
		vs.push_back(s);

	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;

	auto newEnd = unique_copy(vs.begin(), vs.end(), inserter(ls, ls.begin()));
	unique_copy(vs.cbegin(), vs.cend(), front_inserter(ls1));
	unique_copy(vs.cbegin(), vs.cend(), back_inserter(ls2));



	for(auto temp : ls)
		cout<<temp<<"  ";
	cout<<endl;

	for(auto temp : ls1)
		cout<<temp<<"  ";
	cout<<endl;

	for(auto temp : ls2)
		cout<<temp<<"  ";
	cout<<endl;




}
