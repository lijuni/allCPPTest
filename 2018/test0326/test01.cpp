//P217 第一个练习题，递归输出vector，并且使用 assert 断言，和NDEBUG
#include<iostream>
#include<string>
#include<vector>
//#define NDEBUG
#include<cassert>


using namespace std;

void diedai_vector(const vector<string> &vs, vector<string>::iterator it)
{
	if(it==vs.end())
		return;
	else
	{
		cout<<*it<<endl;
		
#ifndef NDEBUG
		cout<<(*it).size()<<endl;
#endif

		
		it++;
		diedai_vector(vs, it);
	}
}

int main()
{
	vector<string> vs;
	string temp;
	while(getline(cin, temp))
	{
		//assert(temp.size()>0);
		vs.push_back(temp);

#ifndef NDEBUG
		if(temp.size()<1)
		{
			cerr<<"Error"<<__FILE__
				<<" : in function "<<__func__<<endl
				<<" : in line "<<__LINE__<<endl
				<<" : at time "<<__TIME__<<endl
				<<" : in date "<<__DATE__<<endl;
		}
#endif

	}

	cout<<"------------------------------"<<endl;
	diedai_vector(vs, vs.begin());
	return 0;
}
