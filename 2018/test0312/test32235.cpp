#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string sTemp,sAdd;
	while(getline(cin, sTemp))
	{
		sAdd+=sTemp;
		sAdd+=' ';
	}
	cout<<"---------------"<<endl;
	cout<<sAdd<<endl;
}
