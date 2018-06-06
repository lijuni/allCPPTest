//P196 最后一个练习题
#include<iostream>

using namespace std;

void print(const int a[10])
{
	for(size_t i=0; i!=10; ++i)
		cout<<a[i]<<endl;
}

int main()
{
	int a[10];
	for(int i=0; i<10; i++)
		a[i]=i+1;
	
	print(a);
}
