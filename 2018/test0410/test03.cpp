#include<iostream>
#include<string>
using namespace std;
int main()
{
	/*
	string str="test";
	cout<<"str : "<<str<<endl;
	
	str.insert(str.size(), 5, '!');
	cout<<"str : "<<str<<endl;

	str.erase(0,3);
	cout<<"str : "<<str<<endl;
	*/

	const char *cp = "this is C_type string";
	string str;
	str.assign(cp, 8);
	cout<<"str : "<<str<<endl;
	str.insert(8, cp+8);
	cout<<"str : "<<str<<endl;
	str.insert(8, cp+8, 2);
	cout<<"str : "<<str<<endl;

}
