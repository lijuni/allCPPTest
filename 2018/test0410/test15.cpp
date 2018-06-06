#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1{"hello"};
	string s2{"Hello"};

	cout<< s1.compare(s2) <<endl;
	cout<< s2.compare(s1) <<endl;

}
