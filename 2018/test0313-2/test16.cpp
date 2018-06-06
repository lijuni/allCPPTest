#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	const char ca[]={'H','i'};
	const char *cp=ca;

	while(*cp)
	{
		cout<<*cp<<endl;
		cp++;
	}
}
