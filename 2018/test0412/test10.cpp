//P362 第一个练习
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<fstream>
#include<iterator>
using namespace std;

int main()
{
	ifstream in;
	in.open("data.txt");
	vector<string> vs;

	istream_iterator<string> isit(in), eof;

	while(isit!=eof)
		vs.push_back(*isit++);
	
	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;

}

