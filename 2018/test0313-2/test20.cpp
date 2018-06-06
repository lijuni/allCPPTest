#include<iostream>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
	int a[]={1,2,3,5,6};

	vector<int> vi(begin(a), a+3);

	for(auto i : vi)
		cout<<i<<"  ";
	cout<<endl;

}
