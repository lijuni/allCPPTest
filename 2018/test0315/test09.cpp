#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi={0,1,2,3,4,5,6,7,8,9};

	vector<int>::iterator beg = vi.begin();
	
	while(beg!=vi.end() && *beg>=0)
	{
		cout<<*beg++<<"  ";
	}

	cout<<endl;

}
