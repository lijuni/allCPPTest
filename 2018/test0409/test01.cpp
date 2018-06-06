//P311 删除容器中的元素
#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int> li{0, 1, 2, 3, 5, 6, 8, 9};

	li.push_front(-1);
	li.push_back(-1);
	
	for(auto temp : li)
	{
		cout<<temp<<" ";
	}
	cout<<endl;



	while(!li.empty())
	{
		cout<<li.front()<<endl;
		cout<<li.back()<<endl;
		li.pop_front();
		li.pop_back();
	}

}
