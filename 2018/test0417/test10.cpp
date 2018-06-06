#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<string, int> msi;
	string s="adm";
	int i=123123;

	msi.insert( make_pair("admin", 000) );

	map<string, int>::iterator it = msi.begin();

	cout<<(*it).first<<"  "
		<<(*it).second<<"  "<<endl;

	(*it).second = i;
	cout<<(*it).first<<"  "
		<<(*it).second<<"  "<<endl;
}
