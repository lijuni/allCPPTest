//P312 第二个练习题
#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{

	int ia[]={0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
	vector<int> vi;
	list<int> li;

	#ifndef DEBUG
	//cout<<ia.size()<<endl;
	cout<<(sizeof(ia)/sizeof(ia[0]))<<endl;
	#endif

	int size = sizeof(ia)/sizeof(ia[0]);

	for(int i=0; i<size; i++)
	{
		vi.push_back(ia[i]);
		li.push_back(ia[i]);
	}

	cout<<"vector : ";
	for(auto temp : vi)
		cout<<temp<<" ";
	cout<<endl<<"list : ";
	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;

	auto it=vi.begin();
	while(it!=vi.end())
	{
		if((*it)%2==0)
			it=vi.erase(it);
		else
			++it;
	}

	auto it2=li.begin();
	while(it2!=li.end())
	{
		if((*it2)%2)
			it2=li.erase(it2);
		else
			++it2;
	}

	cout<<"vector : ";
	for(auto temp : vi)
		cout<<temp<<" ";
	cout<<endl<<"list : ";
	for(auto temp : li)
		cout<<temp<<" ";
	cout<<endl;


}




















