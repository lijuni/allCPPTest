//P301 array练习
#include<iostream>
#include<array>
using namespace std;
int main()
{
	array<int, 10> ari1;
	array<int, 10> ari2{0,1,2};

	for(auto temp : ari1)
		cout<<temp<<" ";
	cout<<endl;
	
	for(auto temp : ari2)
		cout<<temp<<" ";
	cout<<endl;
}
