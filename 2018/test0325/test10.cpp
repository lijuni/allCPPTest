//P215 第二个练习题 inline
#include<iostream>
#include<string>

using namespace std;

inline bool isShorter(const string &s1, const string &s2)
{
	return s1<s2 ;
}

int main()
{
	string s1,s2;
	getline(cin, s1);
	getline(cin, s2);
	cout<<isShorter(s1, s2)<<endl;
	return 0;
}
