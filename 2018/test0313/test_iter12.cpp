#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
	vector<int> vi={0,1,2,3,5,6,8,9,10,12,15,18,21,26,28,32,35};

	for(auto i : vi)
		cout<<i<<"  ";

	vector<int>::const_iterator begin,end;
	begin=vi.cbegin();
	end=vi.cend();

	int search_data=0;
	std::cout<<endl<<"Input search_data: ";
	cin>>search_data;
	std::cout<<"Search_data : "<<search_data<<endl;
	std::cout<<endl;

	while(begin!=end)
	{
		
		vector<int>::const_iterator mid=(begin+((end-begin)/2));

		if(*mid==search_data)
		{
			cout<<"Find : "<<((end-begin)/2)<<endl;
		}
		else if(*mid<search_data)
		{
			begin=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}

}

