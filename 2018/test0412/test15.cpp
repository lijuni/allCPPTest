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
	in.open("data_int.txt");

	istream_iterator<int> isin(in), eof;

	//1
	//vector<int> vi(isin, eof);
	
	//2
	vector<int> vi;
	while(isin!=eof)
		vi.push_back(*(isin++));

	for(auto temp : vi)
		cout<<temp<<"  ";
	cout<<endl;

	sort(vi.begin(), vi.end());
	/*
	for(auto temp : vi)
		cout<<temp<<"  ";
	cout<<endl;
	*/
	ostream_iterator<int> osit(cout, "  ");
	for(auto temp : vi)
		*(osit++)=temp;
	cout<<endl;

}

