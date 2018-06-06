// P365 第二个练习
#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
	//vector<int> vi = {0,1,2,3,5,6,7,8,9,10};
	vector<int> vi;
	for(int i=1; i<=10; i++)
		vi.push_back(i);
	cout<<"vi.size() "<<vi.size()<<endl;
	
	list<int> li;
	vector<int> vi2;

	vi2.resize(10);
	//copy(vi.cbegin(), vi.cend(), vi2);
	//unique_copy(vi.crbegin()+3, vi.crend()-2, back_inserter(li));
	unique_copy(vi.crbegin()+3, vi.crend()-2, vi2.begin());
	
	cout<<"li.size() "<<li.size()<<endl;
	
	for(auto temp : vi2)
		cout<<temp<<" ";
	
	cout<<endl;
}
