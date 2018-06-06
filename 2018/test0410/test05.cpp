// 9.5.2节 练习
#include<iostream>
#include<string>
using namespace std;

void change(string &s, const char &oldVal, const string &newVal);
void change2(string &s, const char &oldVal, const string &newVal);
string qhz(string s, string before, string after);
string qhz2(string s, string before, string after);

int main()
{
	string s="Hang";
	string s2 = qhz(s, "Mr.", "III");
	string s3 = qhz(s, "Mr.", "III");
	cout<<s2<<endl;
	cout<<s3<<endl;

	string s6="Hello";
	change2(s6, 'l', "i");
	cout<<s6<<endl;
}


void change(string &s, const char &oldVal, const string &newVal)
{
	int size=s.size();
	for(int i=0; i<s.size(); i++)
	{
		//cout<<"size = "<<s.size()<<endl;
		cout<<"i = "<<i<<endl;
		if(s[i]==oldVal)
		{
			s.erase(i, 1);
			s.insert(i, newVal);
		}
		cout<<"size = "<<s.size()<<endl;
	}
}

void change2(string &s, const char &oldVal, const string &newVal)
{
	for(int i=0; i<s.size(); i++)
	{
		cout<<"i = "<<i<<endl;
		if(s[i]==oldVal)
		{
			//s.erase(i, 1);
			//s.insert(i, newVal);
			s.replace(i, 1, newVal);
		
		}
	}
}


string qhz(string s, string before, string after)
{
	s.insert(0, before);
	s.append(after);
	return s;
}


string qhz2(string s, string before, string after)
{
	s.insert(0, before);
	s.insert(s.size(), after);
	return s;
}
