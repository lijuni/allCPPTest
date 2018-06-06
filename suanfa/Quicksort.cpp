#include<iostream>
using namespace std;

template <typename T>
void QuickSort(T *a, int left, int right)
{
	int l = left;
	int r = right;
	if(l>=r)
		return ;

	T key = a[l];
	
	while(l<r)
	{
		while(a[r]>=key && l<r) r--;    //这两个函数的先后顺序很重要，不能互相交换
		a[l] = a[r];
		
		while(a[l]<=key && l<r) l++;
		a[r] = a[l];
	}
	a[l] = key;

	QuickSort(a, left, l-1);
	QuickSort(a, l+1, right);
}

int main()
{
	int a[10] = {9, 20 , 1, 3, 12, 5, 8, 7, 0, 2};
	int size = sizeof(a)/sizeof(int);
	cout<<"size = "<<size<<endl;
	for(int i = 0; i<size; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	QuickSort(a, 0, 9);
	
	for(int i = 0; i<size; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	//for(auto temp : a)
	//	cout<<temp<<" ";
	cout<<endl;
}
