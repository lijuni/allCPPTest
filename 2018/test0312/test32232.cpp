#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string s;
	//while(getline(cin, s))
	while(cin>>s)
	{
		cout<<"INPUT = "<<s<<endl;
	}

	return 0;

}
