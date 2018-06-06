//P281 IO类 自己按例子写的
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{

	auto old_state = cin.rdstate();
	cin.clear();
	cout<<old_state;

	int i;
	cin>>i;
	cin.setstate(old_state);

	cin.clear(cin.rdstate()&~cin.failbit&~cin.badbit);

}
