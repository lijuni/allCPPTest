//P171 练习5.5.1 -> 练习5.20
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> vs;
	string temp;
	while(cin>>temp)
		vs.push_back(temp);

	auto beg=vs.begin();
	auto end=vs.end();
	string s_flag=*beg;
	beg++;

	while(beg!=end)
	{
		if(*beg==s_flag)
		{
			cout<<"FIND the SAME"<<endl;
			cout<<*beg<<endl;
			break;
		}
		else
		{
			s_flag=*beg;
			beg++;
		}
	}

	if(beg==end)
		cout<<"FINAL and NOT FIND"<<endl;

}
