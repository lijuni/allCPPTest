//P285 fstream
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	ifstream in1("readme1.txt");
	ifstream in2;
	in2.open("readme2.txt");

	vector<string> vs;

	if(in1)
	{
		string s;
		while(getline(in1,s))
			cout<<s<<endl;

	}
	else
	{
		cout<<"OPEN FILE1 FAIL!"<<endl;
	}

	cout<<endl;

	if(in2)
	{
		string s;
		while(getline(in2,s))
			cout<<s<<endl;

	}
	else
	{
		cout<<"OPEN FILE2 FAIL!"<<endl;
	}

}
