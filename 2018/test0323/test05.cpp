//6.2节例子 find_char
#include<iostream>
#include<string>

using namespace std;

string::size_type find_char(const string &s, const char &c, int &count)
{
	string::size_type find=s.size()+1;
	string::size_type i=0;
	bool find_flag=true;

	for(auto temp : s)
	{
		if(temp==c)
		{
			cout<<"i = "<<i<<endl;
			if(find_flag)
			{
				find=i;
				find_flag=false;
			}
			count++;
		}
		i++;	
	}
	if(find!=(s.size()+1))
		cout<<"Find "<<find<<endl;
	return find;

}

int main()
{
	char c;
	cin>>c;
	string s = "I am Lee, and I Love Yun, and abc";
	cout<<s<<endl;
	int count=0;
	cout<<find_char(s, c, count)<<endl;
	cout<<"count "<<count<<endl;
}








