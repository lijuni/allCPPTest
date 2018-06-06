#include<iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
	string s1="jia Duo Bao";
	string s2="Wang Lao Ji";
	cout<<(s1==s2?"Equal":(s1>s2?"S1>S2":"S1<S2"))<<endl;

	const char c1[]={'a','c','\0'};
	const char c2[]={'a','b','e','\0'};

	cout<<"C1 Length"<<strlen(c1)<<endl;
	cout<<"Compare : "<<strcmp(c1,c2)<<endl;

}
