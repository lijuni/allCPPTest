//P223页 第一个练习题
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int hanshu1(int i1, int i2);

int jia(int i1, int i2)
{
	return i1+i2;
}

int jian(int i1, int i2)
{
	return i1-i2;
}

int chen(int i1, int i2)
{
	return i1*i2;
}

int chu(int i1, int i2)
{
	return i1/i2;
}
int main()
{
	vector<decltype(hanshu1)*> vh;
	vh.push_back(&jia);
	vh.push_back(&jian);
	vh.push_back(&chen);
	vh.push_back(&chu);

	for(auto temp : vh)
	{
		cout<<temp(6,3)<<endl;
		//cout<<(*temp)(1,2)<<endl;
	}

}
