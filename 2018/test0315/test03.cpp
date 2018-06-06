#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> s={"Hello.", "And", "How Are You."};

	for(const auto &temp : s)
		cout<<temp<<endl;

	for(const auto &temp : s)
	{
		if(temp.empty()||temp[temp.size()-1]=='.')
			cout<<"Find One"<<endl;
	}

}
