#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<string, int> ma;
	cout<<ma["hello"]<<endl;

	map<int, string>ma2;
	cout<<ma2[1]<<endl;
	cout<<ma2[0]<<endl;

}
