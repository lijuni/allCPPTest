#include<iostream>
#include<string>
#include"Glim.h"

using namespace std;

int main()
{
	cout<<"g0"<<endl<<endl;
	Glim g0();

	cout<<"g3"<<endl<<endl;
	Glim g3("Au3,", 200, 300);
	
	cout<<"g2"<<endl<<endl;
	Glim g2("Au2", 300);
	
	cout<<"g1"<<endl<<endl;
	Glim g1("Au1");
}
