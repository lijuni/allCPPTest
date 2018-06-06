#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
	multiset<string> c{"Surefire", "Hello"};
	for(auto temp : c)
		cout<<temp<<"  ";
	cout<<endl;
	vector<string> v{"hello", "surefire"};

	//copy(v.begin(), v.end(), inserter(c, c.end()));
	//copy(v.begin(), v.end(), back_inserter(c));
	//copy(c.begin(), c.end(), back_inserter(v));
	copy(c.begin(), c.end(), inserter(v, v.end()));
	for(auto temp : v)
		cout<<temp<<"  ";
	cout<<endl;

}
