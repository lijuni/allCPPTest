#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
using std::string;

int main()
{
	string s1="Jia Duo Bao";
	string s2="The King always Luck";
	string s3;
	s3=s1+" , "+s2;
	cout<<s3<<endl;

	//下面是C风格的字符串，不建议使用
	char ca[]={'c', '\0'};
	int length=strlen(ca);
	cout<<strlen(ca)<<endl;
}
