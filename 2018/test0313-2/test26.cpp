#include<iostream>
using namespace std;

int main()
{
	int ia[2][3]={1,2,3,7,8,9};
	/*
	for(auto p = ia; p!=ia+2; p++)
		for(auto q = *p; q!=*p+3; q++)
			cout<<*q<<"  ";

	for(auto p=begin(ia); p!=end(ia); p++)
		for(auto q = begin(*p); q!=end(*p); q++)
			cout<<*q<<"  ";
	*/

	for(auto i=begin(ia); i!=end(ia); i++)
		for(auto j=begin(*i); j!=end(*i); j++)
			cout<<*j<<"  ";
	cout<<endl;

	for(int i=0; i<2; i++)
		for(int j=0; j<3; j++)
			cout<<ia[i][j]<<"  ";
	cout<<endl;

	for(auto *i=ia; i!=ia+2; i++)
		for(auto *j=*i; j!=*i+3; j++)
			cout<<*j<<"  ";
	cout<<endl;
	
	for(int *i=ia; i!=ia+2; i++)
		for(auto *j=i; j!=i+3; j++)
			cout<<*j<<"  ";
	cout<<endl;

	for(auto &i : ia)
		for(auto &j : i)
			cout<<j<<"  ";
	cout<<endl;

}
