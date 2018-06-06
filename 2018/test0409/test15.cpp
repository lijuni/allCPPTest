#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vi{0,1,2};
	auto iter=vi.begin();

	while(iter!=vi.end())
		if(*iter%2)
			{
				iter = vi.insert(iter, *iter);
				cout<<*iter<<endl;
			}
		else
			++iter;
	cout<<"END"<<endl;
}
