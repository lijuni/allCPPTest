//P190 练习6.11
#include<iostream>

using namespace std;

void reset(int &i)
{
	i=0;
}

int main()
{
	int i=5;
	cout<<"I = "<<i<<endl;
	reset(i);
	cout<<"Reset, I = "<<i<<endl;
}

