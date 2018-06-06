//P302 第一个练习题
#include<iostream>
#include<string>
#include<list>
#include<vector>

using namespace std;

int main()
{
	list<int> li;
	vector<int> vi;

	for(int i=1; i<=10; i++)
	{	
		li.push_back(i);
		vi.push_back(i);
	}

	vector<double> vd1(li.begin(), li.end());
	vector<double> vd2(vi.begin(), vi.end());

	for(auto temp : vd1)
		cout<<temp<<" ";
	cout<<endl;


	for(auto temp : vd2)
		cout<<temp<<" ";
	cout<<endl;

}
