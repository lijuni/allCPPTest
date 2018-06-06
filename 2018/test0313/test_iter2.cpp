#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
	string s = "I Love Yun";
	vector<int> vi;
	for(int i=0;i<=10;i++)
		vi.push_back(i);

	auto c= s.end();
	//cout<<*--c<<endl;

	auto i = vi.end();
	//cout<<*--i<<endl;

	string s2="some string";
	for(auto iter = s2.begin(); iter!=s2.end()&&!isspace(*iter); iter++)
		*iter=toupper(*iter);

	cout<<s2<<endl;
}
