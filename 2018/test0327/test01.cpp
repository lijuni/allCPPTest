#include<iostream>
#include<string>
#include<vector>
#include"test01.h"

using namespace std;

int main()
{
	Sales_data sd1;
	Sales_data sd2;
	read(cin, sd1);
	cout<<endl;
	print(cout,sd1);
	cout<<endl<<"---------------"<<endl;
	
	read(cin, sd2);
	print(cout,sd1);
	cout<<endl<<"---------------"<<endl;

}
