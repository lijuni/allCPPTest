//P201 shorterString
#include<iostream>
#include<string>
using namespace std;

const string &shorterString(const string &s1, const string &s2)
{
	return s1.size()<=s2.size()? s1 : s2;
}

int main()
{
	string s1="lalala";
	string s2="xiaom";
	cout<<shorterString(s1, s2)<<endl;
	string s3=shorterString(s1, s2);
	cout<<s3+"vi"<<endl;
	//shorterString(s1,s2)+="teststring";
	cout<<s2<<endl;

	const string s5="x";
	s5+"x";
}
