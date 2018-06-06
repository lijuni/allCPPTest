#include<iostream>
#include<string>
using std::string;
using namespace std;
using std::cout;
using std::cin;
using std::endl;
int main()
{
	string s1;
	string s2(s1);
	string s3("Hello");
	string s5="Galaxy";
	string s6=s5;
	string s8(10,'w');
	string s9(10,'2');
	string s10(10,'a');
	string s12=string(10,'A');
	//cout<<s1.size()<<"---"<<s1.empty()<<"---"<<s1<<endl;
	//cout<<s12<<endl;
	//cout<<s3+s5+s12<<endl;

	//string si1, si2;
	//std::cin>>si1>>si2;
	//std::cout<<std::endl<<"Input = "<<si1<<endl<<si2<<std::endl;

	string si3;
	//while(cin>>si3)
	//	cout<<" : "<<si3<<endl;


	//while(getline(cin, si3))
	//	cout<<" : "<<si3<<endl;


	string si5;
	//getline(cin, si5);
	//std::cout<<"---"<<si5<<endl;

	/*
	string si6;
	while(getline(cin, si6))
	{
		if(si6.empty())
		{
			cout<<"Input is Empty!"<<endl;
			continue;
		}
		else if(!si6.empty())
			cout<<" : "<<si6.size()<<" : "<<si6<<endl;
	}*/

	int i=0;
	string si8, si9, si10;
	while(getline(cin, si8))
	{
		if(i==0)
			si9=si8;
		if(i==1)
			si10=si8;
		i++;
		if(i==2)
		{
			i=0;
			//cout<<" >? "<<(si9>si10)<<endl;
			si9+=si10;
			cout<<si9<<endl;
		}
	}

	return 0;
}
