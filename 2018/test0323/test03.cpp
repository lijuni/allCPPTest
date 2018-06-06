#include<iostream>
using namespace std;

void change(const int *p)
{
	*p=1;
}

int main()
{
	int i=0;
	cout<<"i = "<<i<<endl;
	
	change(&i);
	
	cout<<"i = "<<i<<endl;

}
