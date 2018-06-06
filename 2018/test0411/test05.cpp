// 练习10.6
#include<iostream>
#include<algorithm>
#include<numeric>
#include<list>
using namespace std;

int main()
{
	list<int> li;

	fill_n(back_inserter(li), 10, 1);

	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

	fill_n(li.begin(), li.size(), 0);
	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

	fill(li.begin(), li.end(), 2);
	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

}
