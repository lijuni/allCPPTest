//P328 第一个练习
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> vs{"12", "68", "99", "1", "0.8"};
	double sum=0;	
	for(auto temp : vs)
	{
		double temp_i = stod(temp);
		sum+=temp_i;
	}
	cout<<sum<<endl;
}
