//P363 反向迭代器
#include<iostream>
#include<vector>
#include<fstream>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
	ifstream in;
	in.open("data_int.txt");
	istream_iterator<int> isit(in), eof;
	vector<int> vi(isit, eof);

	for(auto rcb = vi.crbegin(); rcb != vi.crend(); ++rcb)
		cout<< *rcb <<"  ";
	cout<<endl;

	ostream_iterator<int> osit(cout, "  ");

	sort(vi.begin(), vi.end());

	copy(vi.cbegin(), vi.cend(), osit);
	cout<<endl;

	sort(vi.rbegin(), vi.rend());
	copy(vi.cbegin(), vi.cend(), osit);
	cout<<endl;

}
