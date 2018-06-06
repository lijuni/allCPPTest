#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi={0,1,2,3,5,6,8,9,12,15,18,21,23};
	
	for(auto i : vi)
		cout<<i<<"   ";
	cout<<endl;
	
	auto begin=vi.begin(), end=vi.end();
	auto mid=vi.begin()+(end-begin)/2;
	int sought=0;
	cin>>sought;

	while(mid!=end && *mid!=sought)
	{
		if(sought<*mid)
			end=mid;
		else
			begin=mid+1;

		mid=begin+(end-begin)/2;
	}

	cout<<"Result : "<<mid-begin<<endl;

}
