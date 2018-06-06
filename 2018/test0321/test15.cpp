#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi;
	
	int i;

	while(cin>>i)
		vi.push_back(i);

	vector<int>::iterator it=vi.begin();

	while(it!=vi.end())
	{
		cout<<*it<<" ";
		it++;
	}

}
