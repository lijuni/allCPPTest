#include<iostream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;

int main()
{

	int sz;
	cin>>sz;
	
	while(sz<=0)
	{
		cout<<sz<<endl;
		cin>>sz;
	}

}
