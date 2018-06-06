//P196 练习6.21 6.22
#include<iostream>

using namespace std;

int change621(const int a, const int *b)
{
	return a>*b?a:*b;
}

void change622(int *a, int *b)
{
	int *tmp=a;
	a=b;
	b=tmp;
}

int main()
{
	int a=1;
	int b=2;
	cout<<change621(a, &b)<<endl;

	cout<<"a="<<a<<"  b="<<b<<endl;
	change622(&a, &b);
	cout<<"a="<<a<<"  b="<<b<<endl;

}
