//P296 第一个练习题
#include<iostream>
#include<string>
#include<list>
#include<deque>;
#include<vector>

using namespace std;

int main()
{
	list<deque<int> > ldi;
	deque<int> di1;
	deque<int> di2;
	deque<int> di3;
	
	for(int i=0; i<10; i++)
	{
		di1.push_back(i-1);
		di2.push_back(i);
		di3.push_back(i+1);
	}

	ldi.push_back(di1);
	ldi.push_back(di2);
	ldi.push_back(di3);

	for(auto temp : ldi)
	{
		for(auto tempInt : temp)
			cout<<tempInt<<" ";
		cout<<endl;
	}
	
	cout<<endl;

	list<deque<int>>::iterator it;

	for(it=ldi.begin(); it!=ldi.end(); it++)
	{
		/*
		for(auto &tempInt : *it)
		{
			tempInt++;
			//cout<<tempInt<<" ";
		}
		*/
		for(auto it2=(*it).begin(); it2!=(*it).end(); it2++)
		{
			(*it2)++;
		}
		
		cout<<endl;
			
	}

	for(auto temp : ldi)
	{
		for(auto tempInt : temp)
			cout<<tempInt<<" ";
		cout<<endl;
	}

	cout<<"SIZE : "<<ldi.size()<<endl;
	//cout<<"SIZE2 : "<<(ldi.end()-ldi.begin())<<endl;
	cout<<"MAX_SIZE : "<<ldi.max_size()<<endl;
	cout<<"IS EMPTY?"<<ldi.empty()<<endl;

	deque<int> vi;
	for(int i=1; i<=3; i++)
		vi.push_back(i);
	cout<<"Length : "<<vi.end()-vi.begin()<<endl;


}



























