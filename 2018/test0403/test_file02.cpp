//P285 第一个练习题
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	ifstream in;
	in.open("readme1.txt");
	vector<string> vs;

	if(in)
	{
		string s;
		//while(getline(in, s))
		while(in>>s)
			vs.push_back(s);
	}
	else
		cout<<"OPEN FAILED!"<<endl;

	cout<<"read success"<<endl;
	for(auto temp : vs)
		cout<<temp<<endl;

}
