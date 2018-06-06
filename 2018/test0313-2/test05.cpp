#include<iostream>
#include<vector>

using namespace std;
using std::vector;

int main()
{
	vector<int> a;

	for(int i=0; i<10; i++)
		a.push_back(i);

	for(auto i : a)
		cout<<i<<"  ";
	cout<<endl;

	for(decltype(a.size()) index=0; index<a.size(); index++)
		cout<<a[index]<<"  ";
	cout<<endl;

}
