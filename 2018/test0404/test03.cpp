#include<iostream>
#include<string>
#include<vector>

using namespace std;

//vector<int>::iterator  &find(vector<int>::iterator it1, vector<int>::iterator it2, int i);
vector<int>::iterator  find(vector<int>::iterator it1, vector<int>::iterator it2, int i);

int main()
{
	vector<int> vi;
	for(int i=1; i<=100; i++)
		vi.push_back(i);

	int i;
	while(cin>>i)
	{
		//cout<<find(vi.begin(), vi.end(), i)<<endl;
		vector<int>::iterator it=find(vi.begin(), vi.end(), i);
		cout<<*it<<endl;
	}

}

//vector<int>::iterator  &find(vector<int>::iterator it1, vector<int>::iterator it2, int i)
vector<int>::iterator  find(vector<int>::iterator it1, vector<int>::iterator it2, int i)
{
	while(it1!=it2)
	{
		if((*it1)==i)
			return it1;
		it1++;
	}
	cout<<"Not Found ! "<<endl;
	return it2;
}
