#include<iostream>
#include<string>
#include"person.h"

using namespace std;

int main()
{
	person p1;
	print(cout, p1);
	person p2("Kang", 21);
	read(cin, p1);
	print(cout, p1);
	print(cout, p2);
	
	p2.setName("dafda");
	p2.setAge(19);
	print(cout, p2)<<"  test"<<endl;

}
