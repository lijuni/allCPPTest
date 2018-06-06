// P365 第二个练习
#include<iostream>
#include<vector>
#include<fstream>
#include<list>
#include<iterator>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
	ifstream in("data_int.txt");
	istream_iterator<int> isit(in), eof;
	ostream_iterator<int> osit(cout, "  ");
	vector<int> vi(isit, eof);
	copy(vi.cbegin(), vi.cend(), osit);
	cout<<endl;

	auto find1 = find(vi.begin(), vi.end(), 0);

	copy(vi.begin(), find1, osit);
	cout<<endl;

	auto find2 = find(vi.rbegin(), vi.rend(), 0);
	//copy(vi.rbegin(), find2, 0);
	for(auto temp = vi.rbegin(); temp != find2; ++temp)
		cout<<*temp<< "  "; 
	
	cout<<endl;

}
