//P322 第一个练习
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<char> vc{'H', 'e', 'l', 'l', 'o'};
	vector<char>::iterator it=vc.begin();

	const char *cp="Kang shuai fu";

	string s(cp);

	string s2 = s.substr(1,3);

	string s6;
	for(auto temp : vc)
		s6.push_back(temp);

	cout<<s<<endl;
	cout<<s2<<endl;
	cout<<s6<<endl;

}
