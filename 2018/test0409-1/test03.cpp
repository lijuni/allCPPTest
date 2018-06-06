//P305页 第一个练习
#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
	vector<int> v1{1,2,3,5,6};
	vector<int> v2{1,2,3,5,9};
	//list<int> l1{1,2};

	cout<<"V1==V2? "<<(v1==v2)<<endl;
	cout<<"V1<V2?  "<<(v1<v2)<<endl;
	cout<<"V1>V2?  "<<(v1>v2)<<endl;
	//cout<<"V1>L1?  "<<(v1>l1)<<endl;

}
