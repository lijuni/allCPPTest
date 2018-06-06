#include<iostream>
#include<vector>

using namespace std;
using std::vector;

int main()
{
	vector<int> vi(10,1);
	vector<int>::const_iterator it1,it2;

	it1=vi.cbegin();
	it2=it1;
	it2++;

	cout<<(it2>it1)<<endl;

}
