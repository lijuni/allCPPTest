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
	int i;
	istream_iterator<int> it(cin), eof;
	vector<int> vi;

	//copy(it, eof, vi.begin());

	while(it!=eof)
		vi.push_back(*(it++));

	for(auto temp : vi)
		cout<<temp<<" ";
	cout<<endl;


}

