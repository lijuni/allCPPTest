//P316页 删除偶数值元素并复制奇数值元素
#include<iostream>
#include<vector>
#include<list>

using namespace std;
int main()
{
	//vector<int>  vi;
	list<int>  vi;
	for(int i=0; i<10; i++)
		vi.push_back(i);
	
	for(auto temp : vi)
		cout<<temp<<" ";
	cout<<endl;

	auto it = vi.begin();

	while(it!=vi.end())
	{
		if((*it)%2==0)
		{
			it = vi.erase(it);
		}
		else
		{
			it = vi.insert(it, (*it++));
			++it;
			++it;
			//it+=2;
		}
	}

	for(auto temp : vi)
		cout<<temp<<" ";
	cout<<endl;
}
