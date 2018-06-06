#include<iostream>
#include<string>
#include<vector>
#include"person.h"

using namespace std;

int main()
{
	person p1,p2;
	p1.name="Kang";
	p1.address="Beijing haidian xitucheng 10#";
	/*
	cout<<p1.r_name()<<endl;
	cout<<p1.r_address()<<endl;
	p1.r_person();
	*/
	print(cout, p1);
	cout<<endl;
	
	read(cin, p2);
	cout<<endl;
	print(cout, p2);

	return 0;
}
