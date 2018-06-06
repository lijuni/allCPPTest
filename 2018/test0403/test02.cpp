//P281 IO类 第一个练习题
#include<iostream>
#include<string>
#include<vector>

using namespace std;

istream &test02(istream &is)
{
	string s;
	while(!is.eof())
	{
		is>>s;
		cout<<s<<endl;
	}
	cout<<"EOF"<<endl;
	//is.clear();
	return is;
}

int main()
{

	test02(cin);
	cout<<"第一个结束"<<endl;
	test02(cin);
	cout<<"第二个结束"<<endl;
	return 0;

}
