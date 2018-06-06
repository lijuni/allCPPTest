//P318 管理容器容量
#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> vi{1, 2, 3};
	cout<<"Capacity : "<<vi.capacity()<<endl;
	vi.resize(3);
	cout<<"Capacity : "<<vi.capacity()<<endl;
}
