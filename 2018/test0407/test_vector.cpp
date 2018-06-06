#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> vs;
	ifstream ifin("file1.txt");
	string s;
	while(getline(ifin,s))
		vs.push_back(s);

	for(auto it=vs.begin(); it!=vs.end(); it++)
		cout<<*it<<endl;


}
