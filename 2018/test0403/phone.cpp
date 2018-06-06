#include<iostream>
#include<fstream>
#include<sstream>
#include"phone.h"
using namespace std;


int main()
{

	vector<PersonInfo> people;
	ifstream in("phone.txt");
	string s;
	if(in)
	{
		while(getline(in, s))
		{
			string num;
			istringstream iss(s);
			PersonInfo pi;
			iss>>pi.name;
			while(iss>>num)
				pi.phones.push_back(num);
			people.push_back(pi);
		}
	}
	else
	{
		cout<<"Read FAIL"<<endl;
		return -1;
	}

	#ifdef DEBUG
	cout<<"读取结束了"<<endl;
	cout<<"People length"<<people.end()-people.begin()<<endl;
	#endif

	for(const auto &entry : people)
	{
		#ifdef DEBUG
		cout<<"进入第一级循环"<<endl;
		#endif 

		ostringstream formatted, badNums;

		for(const auto &nums : entry.phones)
		{
			#ifdef DEBUG
			cout<<"进入第二级循环"<<endl;
			cout<<nums<<endl;
			#endif
			if(nums.length()<=1)
			{
				badNums<<nums<<" ";
			}
			else
			{
				formatted<<nums<<" ";
			}
		}

		if(badNums.str().empty())
			cout<<entry.name<<" "<<formatted.str()<<endl;
		else
			cerr<<"input error : "<<entry.name<<" invalid number(s) "<<badNums.str()<<endl;
	
	}

}
