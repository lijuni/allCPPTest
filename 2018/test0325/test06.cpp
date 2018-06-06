//P206 6.3.3节练习 ， 这节还没弄懂 ， 还需要继续学习
#include<iostream>
using namespace std;

int (*fanhui(int i))[10];

auto fanhui1(int i) -> int(&)[10];

int a[10];

decltype(a) *fanhui3(int i);

int ((&attPtr)(int i))[10]

int main()
{
	int a[10];
	int *a[10];
	int (*a)[10];
}
