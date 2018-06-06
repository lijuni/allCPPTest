#include<iostream>

using namespace std;

int main()
{
	double x,y;
	while(cin>>x>>y)
	{
		try{
			if(y==0)
				throw runtime_error("被除数为零，出错");
			cout<<x/y<<endl;
		}catch(runtime_error err){
			cout<<err.what()<<endl;
			cout<<"成功捕捉到了错误"<<endl;
			cout<<"Do you want to try it again? Input y or n"<<endl;
			char c;
			cin>>c;
			if(c=='N'||c=='n')
				break;
			else 
				continue;
		}
	}
}
