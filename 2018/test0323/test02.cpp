//P190 练习6.12
#include<iostream>

using namespace std;

void change(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}

int main()
{
	int i1=1, i2=2;
	cout<<"i1 = "<<i1<<"  i2 = "<<i2<<endl;
	change(i1,i2);
	cout<<"i1 = "<<i1<<"  i2 = "<<i2<<endl;

}
