//P168 练习5.17
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1{1,2,3,5,6};
	vector<int> v2{1,2,3,5,6};

	int temp=0,i=0;
	/*
	cout<<"Please Input 1st : "<<endl;
	
	while(cin>>temp)
		v1.push_back(temp);

	cout<<"Please Input 2st : "<<endl;
	while(cin>>temp)
		v2.push_back(temp);
	*/
	if(v1.size()==v2.size())
	{
		for(i=0; i<v1.size(); ++i)
			if(v1[i]!=v2[i])
				break;
		if(i==v1.size())
			cout<<"V1 与 V2 相等"<<endl;
	}


	else if(v1.size()<v2.size())
	{
		for(i=0; i<v1.size(); ++i)
			if(v1[i]!=v2[i])
				break;
		if(i==v1.size())
			cout<<"V1 是 V2 的前缀"<<endl;
	}

	else if(v2.size()<v1.size())
	{
		for(i=0; i<v2.size(); ++i)
			if(v1[i]!=v2[i])
				break;
		if(i==v2.size())
			cout<<"V2 是 V1 的前缀"<<endl;
	}

}
