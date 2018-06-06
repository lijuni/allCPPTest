#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s_temp;
	string s_flag;
	string s_max;
	int i_flag=0;
	int i_max;

	cin>>s_temp;
	s_flag=s_temp;
	s_max=s_temp;
	i_flag=1;
	i_max=1;

	while(cin>>s_temp)
	{
		if(s_temp==s_flag)
		{
			++i_flag;
			if(i_flag>i_max)
			{
				i_max=i_flag;
				s_max=s_flag;
			}
		}

		if(s_temp!=s_flag)
		{
			s_flag=s_temp;
			i_flag=1;
		}	
	}
	cout<<s_max<<" 出现了 "<<i_max<<" 次数"<<endl;
}
