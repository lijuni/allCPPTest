//P327 第三个练习
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string up{"bdfhiklt"};
	string low{"gpq"};

	string str;
	cin>>str;

	string::size_type pos=0;

	while( (pos = str.find_first_of(up, pos)) != string::npos )
	{
		str.erase(pos, 1);
		//++pos;
	}

	//cout<<"after up : "<<str<<endl;

	pos = 0;
	while( (pos = str.find_first_of(low, pos)) != string::npos )
	{
		str.erase(pos, 1);
		//++pos;
	}

	cout<<str<<endl;

}
