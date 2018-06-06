#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s="This is a string";

	string *ps=&s;

	cout<<"Size1 : "<<s.size()<<endl;
	cout<<"Size2 : "<<ps->size()<<endl;

	decltype(s.size()) m;
	m=(*ps).size();
	cout<<"m = "<<m<<endl;

	decltype(s.size()) n;
	n=ps->size();
	cout<<"n = "<<n<<endl;


	decltype(s.size()) o;
	o=ps->size();
	cout<<"o = "<<o<<endl;

}
