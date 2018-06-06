#include<iostream>
using namespace std;

int main()
{
	int i1,i2;


	try{
		while(cin>>i1>>i2)
		{
			if(i1!=i2)
				throw runtime_error("两个数不相等");
			cout<<i1<<" == "<<i2<<endl;
		}
	}catch(runtime_error err){
		cout<<"捕捉到了异常"<<endl;
	}

}
