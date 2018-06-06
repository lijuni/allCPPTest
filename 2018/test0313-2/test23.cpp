#include<iostream>
using namespace std;

int main()
{
	int a[2][3]={0,1,2,3};
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
			cout<<a[i][j]<<"  ";
		cout<<endl;
	}


	int b[2][3]={{1},{2}};

	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
			cout<<b[i][j]<<"  ";
		cout<<endl;
	}

	int c[5][6]={0};
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<6; j++)
			cout<<c[i][j]<<"  ";
		cout<<endl;
	}

	int (&ref)[6]=c[1];
	for(auto k : ref)
		cout<<k<<" - ";

}
