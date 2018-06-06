#include<iostream>
#include<string>
#include<vector>
#include<numeric>
#include<algorithm>
#include<fstream>
using namespace std;

void show(const vector<string> &vs);
void show(vector<string>::const_iterator beg, vector<string>::const_iterator end);
void biggies(vector<string> &vs, vector<string>::size_type sz);
bool isShorter(const string &s1, const string &s2);


int main()
{
	ifstream in("data.txt");
	vector<string> vs;
	vs.reserve(100);
	string s;

	while(in>>s)
		vs.push_back(s);
	
	vector<string>::size_type sz = 5;

	biggies(vs, sz);
}

void biggies(vector<string> &vs, vector<string>::size_type sz)
{
	cout<<"origin  ";
	show(vs);
	
	sort(vs.begin(), vs.end());
	cout<<"show    ";
	show(vs);
	
	auto flag = unique(vs.begin(), vs.end());
	cout<<"unique  ";
	show(vs);
	
	vs.erase(flag, vs.end());
	cout<<"erase   ";
	show(vs);
	
	stable_sort(vs.begin(), vs.end(), [](const string &s1, const string &s2){ return s1.size()<s2.size(); } );
	cout<<"stable  ";
	show(vs);

	//auto wc = find_if(vs.begin(), vs.end(), [sz](const string &s){ return s.size()>=sz; } );
	auto wc = partition(vs.begin(), vs.end(), [sz](const string &s){ return s.size()<sz; }  );
	cout<<"find if ";
	show(wc, vs.end());

	cout<<"大于给定长度 " << sz <<" 的字符串个数为 : "<< vs.end() - wc <<endl;
	show(wc, vs.end());

	for_each(wc, vs.end(), [](const string &s){ cout<<s<<" "; } );
	cout<<endl;
}

void show(const vector<string> &vs)
{
	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;
	cout<<endl;
}

void show(vector<string>::const_iterator beg, vector<string>::const_iterator end)
{
	for(; beg!=end; beg++)
		cout<< (*beg) <<" ";
	cout<<endl;
	cout<<endl;
}

bool isShorter(const string &s1, const string &s2)
{
	return s1.size()<s2.size();
}





