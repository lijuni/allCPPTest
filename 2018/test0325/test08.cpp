//P213 6.5.1节 第三个练习题
#include<iostream>
#include<string>

using namespace std;

string make_plural(size_t t, const string &start="table", const string &end="s")
{
	//if(t>1)
	//	return start+end;
	
	return t>1? start+end : start;

}

int main()
{
	cout<<make_plural(2, "apple", "s")<<endl;
	cout<<make_plural(1, "banana", "s")<<endl;
	cout<<make_plural(2, "apple")<<endl;
	cout<<make_plural(1, "banana")<<endl;
	cout<<make_plural(3)<<endl;

}
