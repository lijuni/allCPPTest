#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vi;
	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;

	for(vector<int>::size_type ix=0; ix!=23; ++ix)
		vi.push_back(ix);

	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;

	for(int i=0; i<9; i++)
		vi.push_back(i);

	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;

	vi.push_back(0);
	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;

	vi.reserve(100);
	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;

	vi.shrink_to_fit();
	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;

	vi.resize(51);
	cout<<"size     = "<<vi.size()<<endl
		<<"capacity = "<<vi.capacity()<<endl;
}
