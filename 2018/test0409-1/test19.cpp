//P311 第一个练习题
#include<iostream>
#include<list>
using namespace std;

int main()
{
	//list<int> li{1,2,3};
	list<int> li{1};
	
	int i1=li.front();
	int i2=li.back();

	int i3=*(li.begin());
	int i4=*(--li.end());

	cout<<"i1 = "<<i1<<endl;
	cout<<"i2 = "<<i2<<endl;
	cout<<"i3 = "<<i3<<endl;
	cout<<"i4 = "<<i4<<endl;

}
