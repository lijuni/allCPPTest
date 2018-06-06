#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>  vi = {0,1,1,2,0,2,5,6};
	unique(vi.begin(), vi.end());

	for(auto temp : vi)
		cout<<temp<<"  ";
	cout<<endl;
}
