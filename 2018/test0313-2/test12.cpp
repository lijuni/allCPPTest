#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a[3]={0,2,2}, b[5]={0,1,2,3,5};

	int *e1=end(a),*b1=begin(a);
	int *e2=end(b),*b2=begin(b);
	int a_size=e1-b1;
	int b_size=e2-b2;
	int small=(a_size<=b_size?a_size:b_size);
	cout<<"small"<<small<<endl;
	int i=0;
	for(i=0; i<small; i++)
	{
		if(a[i]==b[i])
			continue;
		else
		{
			if(a[i]<b[i])
				cout<<"A<B"<<endl;
			else
				cout<<"A>B"<<endl;
			return 0;
		}
	}

	if(i==small && a_size==b_size)
		cout<<"A=B"<<endl;
	else
		cout<<(a_size>b_size?"A>B":"A<B")<<endl;

	return 0;

	//cout<<"a_size"<<a_size<<endl;
	//cout<<"b_size"<<b_size<<endl;
	
	cout<<"a=b? "<<(a==b)<<endl;

	vector<int> v1(10,0);
	vector<int> v2(10,0);
	
	cout<<"v1=v2?"<<(v1==v2)<<endl;
}
