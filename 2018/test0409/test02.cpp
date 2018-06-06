//P312 用erase从容器中删除元素
#include<iostream>
#include<list>
#include<string>

using namespace std;

int main()
{
	list<int> li;
	
	for(int i=0; i<10; i++)
		li.push_back(i);

	for( int i : li)
		cout<<i<<" ";
	cout<<endl;
	
	auto it=li.begin();

	while(it!=li.end())
	{
		if((*it)%2==0)
			it=li.erase(it);
		else
			++it;
	}

	for( int i : li)
		cout<<i<<" ";
	cout<<endl;

}
