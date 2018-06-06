#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1="Kangshuaifu";
	auto pos1 = s1.find("a");
	auto pos2 = s1.find("e");
	cout<<pos1<<endl;
	cout<<pos2<<endl;
	
	int i=s1.find("e");
	cout<<"i = "<<i<<endl;

}
