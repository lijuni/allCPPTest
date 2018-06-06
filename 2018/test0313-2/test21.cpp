#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	int a[100]={};
	vector<int> vi;
	int i;
	while(cin>>i)
		vi.push_back(i);

	i=0;
	for(auto temp : vi)
	{
		a[i]=temp;
		i++;
	}

	for(auto j = begin(a); j!=end(a); j++)
		cout<<*j;

}
