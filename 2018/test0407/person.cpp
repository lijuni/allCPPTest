#include<iostream>
#include<string>
#include<vector>
#include"person.h"

using namespace std;

int main()
{
	person p1;
	person p2("Dong");
	person p3("Kang", 20);

	cout<<"P1: "<<p1.getName()<<"   "<<p1.getAge()<<endl;
	cout<<"P2: "<<p2.getName()<<"   "<<p2.getAge()<<endl;
	cout<<"P3: "<<p3.getName()<<"   "<<p3.getAge()<<endl;
	cout<<endl;

	p1.setName("Chen");
	p1.setAge(30);
	cout<<"P1: "<<p1.getName()<<"   "<<p1.getAge()<<endl;

}
