#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> vi;
	int temp;

	while(cin>>temp)
		vi.push_back(temp);

	//for(auto i : vi)
	//	cout<<((i%2==0)?"偶数":"奇数")<<endl;

	for(auto it=vi.begin(); it!=vi.end(); it++)
	{
		cout<<(((*it)%2==0)?"偶数":"奇数")<<endl;
		*it = *it*2;
	}

	for(auto i : vi)
		cout<<i<<endl;

}
