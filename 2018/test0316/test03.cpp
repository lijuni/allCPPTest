#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	string p1 = s+ ((s[s.size()-1]=='s')?"":"s");
	cout<<p1<<endl;



}