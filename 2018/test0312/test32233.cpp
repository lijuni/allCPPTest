#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	/*
	string s1, s2;
	while(cin>>s1>>s2)
	{
		if(s1==s2)
			cout<<"Equal"<<endl;
		else
			cout<<(s1>s2?s1:s2)<<endl;
	}
	*/

	string s,s1,s2;
	int i=0;
	while(getline(cin,s))
	{
		i++;
		cout<<"i = "<<i<<endl;
		if(i==1)
			s1=s;
		if(i==2)
		{
			s2=s;
			i=0;
			if(s1.size()==s2.size())
				cout<<"Equal"<<endl;
			else if(s1.size()>s2.size())
				cout<<s1<<endl;
			else
				cout<<s2<<endl;
			cout<<"**********************"<<endl;
		}
	}

}
