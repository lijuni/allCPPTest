//P309 第三个练习题
#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{
	list<int> li;
	deque<int> di1;
	deque<int> di2;

	int i;
	while(cin>>i)
		li.push_back(i);

	for(auto temp : li)
	{
		if(temp%2==0)
			di2.push_back(temp);
		else
			di1.push_back(temp);
	}

	cout<<endl<<"奇数 deque : ";
	for(auto temp : di1)
		cout<<temp<<" ";
	cout<<endl<<"偶数 deque : ";
	for(auto temp : di2)
		cout<<temp<<" ";

}
