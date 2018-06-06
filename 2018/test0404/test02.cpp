//P297 第二个练习题
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool find(vector<int>::iterator it1, vector<int>::iterator it2, int i);

int main()
{
	vector<int> vi;
	for(int i=0; i<=100; i++)
		vi.push_back(i);
	
	int i;
	while(cin>>i)
	{
		cout<<find(vi.begin(), vi.end(), i)<<endl;
	}
}


bool find(vector<int>::iterator it1, vector<int>::iterator it2, int i)
{
	while(it1!=it2)
	{
		if((*it1)==i)
			return true;
		it1++;
	}
	return false;
}
