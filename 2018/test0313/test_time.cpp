#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	string s[]={"Hi", "Lee"};
	cout<<s[0]<<" "<<s[1]<<endl;

	time_t now=time(0);
	char *ct=ctime(&now);
	cout<<ct<<endl;

}
