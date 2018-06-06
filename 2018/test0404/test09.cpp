//P301 第一个练习题
#include<iostream>
#include<vector>

using namespace std;

int main()
{

	vector<int> temp={0,1,2};
	
	vector<int> vi1{1,2};
	vector<int> vi2(temp);
	vector<int> vi3(10);
	vector<int> vi5(10,5);
	vector<int> vi6(temp.begin(), temp.end());
	vector<int> vi8=temp;
	vector<int> vi9={10};
}
