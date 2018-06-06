// 练习 10.20
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> vs;
	string s;
	ifstream in("data.txt");

	while(in>>s)
		vs.push_back(s);

	int count = count_if(vs.begin(), vs.end(), [](const string &s) { return s.size()>6;  } );

	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;
	
	cout<<"count = "<<count<<endl;

}
