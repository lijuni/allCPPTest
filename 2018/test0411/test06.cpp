// 练习 10.7
#include<iostream>
#include<numeric>
#include<algorithm>
#include<list>
#include<vector>

using namespace std;

int main()
{

	vector<int> vec;
	vec.reserve(10);
	vec.resize(10);
	cout<<"capacity : "<<vec.capacity()<<endl
		<<"size     : "<<vec.size()<<endl;
	fill_n(vec.begin(), 10, 0);
	//fill_n(back_inserter(vec), 10, 0);
	cout<<"capacity : "<<vec.capacity()<<endl
		<<"size     : "<<vec.size()<<endl;
	for(auto temp : vec)
		cout<<temp<<"-";
	cout<<endl;

	/*
	list<int> lst;
	vector<int> vec;
	int i;

	while(cin>>i)
		lst.push_back(i);

	//copy(lst.cbegin(), lst.cend(), vec.begin());
	copy(lst.cbegin(), lst.cend(), back_inserter(vec));

	for(auto temp : vec)
		cout<<temp<<"-";
	cout<<endl;
	*/
}
