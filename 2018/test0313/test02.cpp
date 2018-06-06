//3.3.3节练习 3.20
#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
	vector<int> vi;
	int i;

	while(cin>>i)
		vi.push_back(i);

	std::cout<<"--------"<<endl;
	
	/*
	i=0;
	int sum=0;

	for(auto temp : vi)
	{
		i++;

		if(i==1)
			sum+=temp;
		else
		{
			sum+=temp;
			cout<<sum<<endl;
			sum=0;
			i=0;
		}
	}
	*/

	int size=vi.size()-1;
	for(decltype(vi.size()) index=0; index<vi.size()/2; index++)
	{
		std::cout<<vi[index]+vi[size-index]<<endl;
	}



}
