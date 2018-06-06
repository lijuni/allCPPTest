#include<iostream>
using namespace std;

int main()
{
	unsigned int quiz1=0;
	cout<<"Before"<<quiz1<<endl;

	quiz1 |= 1UL<<27;
	cout<<"|=    "<<quiz1<<endl;

	quiz1=quiz1|1UL<<27;
	cout<<"|=    "<<quiz1<<endl;
	bool status = quiz1 & (1UL<<27);
	cout<<"Bool  "<<status<<endl;

	quiz1&= ~(1UL<<27);
	cout<<"~=    "<<quiz1<<endl;

	status = quiz1 & (1UL<<27);
	cout<<"Bool  "<<status<<endl;

}
