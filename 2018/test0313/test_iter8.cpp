#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
	vector<int> vi;

	int temp;
	for(int i=0; i<10; i++)
	{
		cin>>temp;
		vi.push_back(temp);
	}

	for(auto it=vi.begin(); it!=vi.end(); it++)
	{
		*it*=2;
	}

	std::cout<<endl<<endl;

	for(auto c : vi)
		cout<<c<<endl;

}
