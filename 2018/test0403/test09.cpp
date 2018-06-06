//P289 第二个练习题
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>

using namespace std;

int main()
{
	ifstream infile;
	infile.open("readme1.txt");

	vector<string> vs;
	
	if(infile)
	{
		string s;
		while(getline(infile, s))
			vs.push_back(s);
	}

	for(auto temp : vs)
	{
		istringstream iss(temp);
		string s;
		while(iss>>s)
			cout<<s<<endl;
	}


}
