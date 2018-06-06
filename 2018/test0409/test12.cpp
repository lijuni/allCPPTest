// 练习9.33
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v{1,2,3,5,6};
	auto beg=v.begin();
	
	while(beg!=v.end())
	{
		beg++;
		cout<<*beg<<endl;
		cout<<"end : "<<(*(v.end()))<<endl;
		beg = v.insert(beg,0);
		beg++;
	}

	for(auto temp : v)
		cout<<temp<<" ";
	cout<<endl;

}
