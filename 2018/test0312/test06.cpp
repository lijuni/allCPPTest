#include<iostream>
#include<string>

using namespace std;
using std::string;

int main()
{
	//string ox="0123456789abcdef";
	const string ox="0123456789abcdef";
	string output;
	decltype(ox.size()) index=0;
	while(cin>>index)
	{
		if(index>=0&&index<ox.size())
			output+=ox[index];
			//cout<<ox[index]<<endl;
		else
			break;
	}
	cout<<output<<endl;
}
