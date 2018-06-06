#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::vector;

int main()
{
	int grade=0;
	int temp=0;
	vector<int> iv(11,0);
	
	while(cin>>grade)
	{
		temp=grade/10;
		iv[temp]++;
	}

	for(auto i : iv)
	{
		std::cout<<i<<endl;
	}

}
