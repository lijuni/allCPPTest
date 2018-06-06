//P199 第一个练习 initializer_list 
#include<iostream>

using namespace std;

int sum_il(initializer_list<int> ili)
{
	int sum=0;
	for(const auto &temp : ili)
		sum+=temp;
	return sum;
}

int main()
{
	cout<<sum_il({1,2,3})<<endl;
}
