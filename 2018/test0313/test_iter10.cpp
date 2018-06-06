#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::string;
using std::vector;

int search(vector<int>const_iterator it, int l, int r, int search_data)
{
	int mid=(l+r)/2;
	if(*(vi+mid)==search_data)
	{
		cout<<"Find"<<mid<<endl;
		return 0;
	}
	else if(*(vi+mid)<search_data)
	{
		search(it,mid+1,r,search_data);
	}
	else
	{
		search(it,l,mid-1,search_data);
	}
	return -1;
}

int main()
{
	vector<int> vi={0,1,2,5,8,9,12,18,22,28,31};
	vector<int>::const_iterator it;

	for(it=vi.cbegin(); it!=vi.cend();it++)
	{
		cout<<*it<<"   ";
	}

	int search_data;
	cout<<"Please The Data You Want 2 Search : ";
	cin>>search_data;

	int n=vi.size()

	it=vi.cbegin();

	int result=search(it,0,n-1,search_data);
	
	cout<<"The result is "<<result<<endl;

}


