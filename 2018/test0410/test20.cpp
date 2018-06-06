#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	stack<int> si;
	queue<int> qi;
	for(int i=0; i<10; i++)
	{
		si.push(i);
		qi.push(i);
	}

	
	cout<<"stack top : ";
	while(!si.empty())
	{
		cout<<si.top()<<" ";
		si.pop();
	}
	cout<<endl;
		
	cout<<"queue top : ";
	while(!qi.empty())
	{
		cout<<qi.front()<<" ";
		qi.pop();
	}
	cout<<endl;
	

}
