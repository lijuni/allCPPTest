#include<iostream>
#include<string>

using namespace std;

int main()
{

	do
	{
		string s1,s2;
		getline(cin, s1);
		getline(cin, s2);
		cout<<(s1.size()<s2.size()?s1:s2)<<endl;
	
	}while(cin);

}
