//P327 第一个练习
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str{"ab2c3d7R5E6"};
	string num{"0123456789"};
	string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	
	string::size_type pos=0;
	cout<<"num : ";
	while((pos = str.find_first_of(num, pos)) != string::npos )
	{
		cout<<str[pos];
		++pos;
	}
	cout<<endl;
	pos=0;
	cout<<"alpha : ";
	while( (pos = str.find_first_not_of(num, pos)) != string::npos )
	{
		cout<<str[pos];
		++pos;
	}
	cout<<endl;
}
