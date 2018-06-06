//P419 最后一个练习
#include<iostream>
#include<memory>

using namespace std;

int main()
{
	int ix=100, *pi=&ix, *pi2 = new int(100);

	//unique_ptr<int> p0(ix);
	unique_ptr<int> p1(pi);
	unique_ptr<int> p3(&ix);
	unique_ptr<int> p5(new int(100));

}
