#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi;
	int i;
	while(cin>>i)
		vi.push_back(i);
	cout<<endl<<endl;


	i=0;
	int sum=0;

	for(auto it=vi.begin(); it!=vi.end(); it++)
	{
		i++;
		if(i==1)
			sum+=*it;
		else
		{
			sum+=*it;
			cout<<"sum : "<<sum<<endl;
			sum=0;
			i=0;
		}

	}

}
