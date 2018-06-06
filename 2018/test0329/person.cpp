#include<iostream>
#include<string>
#include<vector>
#include"person.h"

using namespace std;

int main()
{
	person p;
	
	print(cout,p);
	read(cin,p);
	print(cout,p);

	person p2("zhang","DoneMengPo");
	print(cout,p2);

}
