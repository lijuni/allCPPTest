//P311 第二个练习题
#include<iostream>
#include<list>
#include<vector>
#include<string>

using namespace std;

int main()
{
	//vector<string> vs{"1st", "2nd", "3rd"};
	vector<string> vs;

	string s1=vs.at(0);
	string s2=vs[0];
	string s3=vs.front();
	string s4=*(vs.begin());

	cout<<"s1 = "<<s1<<endl;
	cout<<"s2 = "<<s2<<endl;
	cout<<"s3 = "<<s3<<endl;
	cout<<"s4 = "<<s4<<endl;

}
