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
	ifstream in("data_int.txt");
	istream_iterator<int> isit(in), eof;
	ostream_iterator<int> osit(cout, "  ");
	//vector<int> vi(isit, eof);
	vector<int> vi;

	while(isit!=eof)
		vi.push_back(*(isit++));
	
	for(auto temp : vi)
		*(osit++)=temp;
	cout<<endl;

	sort(vi.begin(), vi.end());

	for(auto temp : vi)
		*(osit++)=temp;
	cout<<endl;

	unique_copy(vi.begin(), vi.end(), osit);
	cout<<endl;

}
