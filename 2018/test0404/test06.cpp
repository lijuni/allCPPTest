//P299 rbegin, cbegin, rcbegin and auto
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi{0,1,2,3,4,5,6,7,8,9};

	/*
	vector<int>::const_reverse_iterator it1;
	vector<int>::const_reverse_iterator it2;

	it1=vi.crbegin();
	it2=vi.crend();
	*/

	auto it1=vi.crbegin();
	auto it2=vi.crend();


	while(it1!=it2)
	{
		cout<<(*it1)<<endl;
		++it1;
	}
}
