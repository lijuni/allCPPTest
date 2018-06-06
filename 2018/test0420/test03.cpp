// P411 第一个练习题
#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;

vector<int> *vir()
{
	vector<int> *vip = new vector<int>;
	return vip;
}

vector<int> *vir2( vector<int> *vip )
{
	int i;
	while(cin>>i)
		vip->push_back(i);
	return vip;
}

void vir3( vector<int> *vip )
{
	for(auto temp : *vip)
		cout<<temp<<"  ";
	cout<<endl;

	delete vip;
}

int main()
{
	vir3( vir2( vir() ) );
}
