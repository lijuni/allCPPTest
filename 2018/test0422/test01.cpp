//P417 第一个练习
#include<iostream>
#include<memory>

using namespace std;

void cancel(int *i)
{
	i=0;
	cout<<"被释放了"<<endl;
}

int main()
{
	int i=5;
	//shared_ptr<int> sp(&i, cancel);
	shared_ptr<int> sp(&i, [](int *i) { cout<<"lambda 被释放了"<<endl;});
	cout<<"主函数结束了"<<endl;
}
