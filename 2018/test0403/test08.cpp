//P289 第一个练习
#include<iostream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

istream &hanshu(istream &is)
{
	string s;
	while(is>>s)
	{
		cout<<s<<endl;
	}
	return is;
}

int main()
{
	istringstream iss("faefafaefaefaefafeasfa");
	hanshu(iss);
}
