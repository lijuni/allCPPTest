//P135
#include<iostream>

using namespace std;

int main()
{
	int count;
	cin>>count;

	cout<<( (count>=90)?"high_pass":(count>=75)?"low pass":(count>=60)?"pass":"fail" )<< endl;

	if(count>=90)
		cout<<"high_pass"<<endl;
	else if(count>=75)
		cout<<"low_pass"<<endl;
	else if(count>=60)
		cout<<"pass"<<endl;
	else
		cout<<"fail"<<endl;


}
