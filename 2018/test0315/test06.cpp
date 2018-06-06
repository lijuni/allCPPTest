#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	cout<<endl;


	while(cin>>a>>b>>c>>d)
	{
		if(a>b && b>c && c>d)
			cout<<"true"<<endl;
		else
			cout<<"false"<<endl;
	}

	return 0;

}
