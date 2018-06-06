#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vi;
	int temp;

	while(cin>>temp && temp!=38)
	{
		vi.push_back(temp);
		cout<<"OK"<<endl;
	}
	cout<<"END"<<endl;

	for(const auto &temp : vi)
		cout<<temp<<"  ";

	return 0;

}
