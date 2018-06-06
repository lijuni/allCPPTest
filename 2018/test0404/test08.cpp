//P299 rbegin, cbegin, rcbegin and auto
#include<iostream>
#include<vector>

using namespace std;

void out(vector<int>  vi)
{
	auto it1=vi.begin();
	auto it2=vi.end();
	while(it1!=it2)
	{
		cout<<*(it1++)<<" ";
		//it1++;
	}
	cout<<endl;
}

int main()
{
	vector<int> vi{0,1,2,3,4,5,6,7,8,9};
	out(vi);
	
	vector<int> vi2(vi);
	out(vi2);

	vector<int> vi3(vi.begin()+1, --vi.end());
	out(vi3);

}
