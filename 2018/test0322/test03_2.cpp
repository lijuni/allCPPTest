//P171 练习5.5.2 -> 练习5.21
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

	cout<<"输入完成"<<endl;

	auto beg=vs.begin();
	auto end=vs.end();
	string s_flag=*beg;
	beg++;

	while(beg!=end)
	{
		if(*beg==s_flag)
		{
			if(!isupper((*beg)[0]))
			{
				beg++;
				continue;
			}
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
