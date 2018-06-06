//测试异常代码
#include<iostream>
using namespace std;

int main()
{
	int i1,i2;
	while(cin>>i1>>i2)
	{
		if(i1!=i2)
			throw runtime_error("Data Must Be The Same");
			cout<<"i1 + i2 = "<<i1+i2<<endl;
	}
}
