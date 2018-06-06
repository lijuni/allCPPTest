//P381 第一个练习
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<fstream>

using namespace std;

int main()
{
	vector<pair<string, int>> vp;
	
	string s;
	int i;
	
	ifstream in("data_pair.txt");
	
	while(in>>s)
	{
		in>>i;
		/*
		*第一种初始化pair
		*pair<string, int> temp;
		*temp = make_pair(s, i);
		*/

		/*
		*第二种初始化pair
		*pair<string, int> temp(s, i);
		*/
		
		/*
		*第三种初始化pair
		*/
		pair<string, int> temp = {s, i};
		
		vp.push_back(temp);
	}

	for(const auto &temp : vp)
	{
		cout<<"1st  "<<temp.first<<"  "
			<<"2nd  "<<temp.second<<endl;
	}

}
