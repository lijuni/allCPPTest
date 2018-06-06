#include<iostream>
#include<memory>
#include<string>
#include<list>
#include<initializer_list>
#include"test01.h"

using namespace std;

int main()
{
	class StrBlob sb1( {"hello", "are", "e1b"} );

	cout<<"size  :  "<< sb1.size()<<endl;
	cout<<"empty :  "<< sb1.empty()<<endl;
	sb1.pop_back();
	sb1.push_back("e1dl");
	cout<<endl<<"front :  "<< sb1.front()<<endl;
	cout<<"back  :  "<< sb1.back()<<endl;

	class StrBlob sb2 = sb1;
	sb2.push_back("edcl1_t");
	cout<<"back  :  "<< sb1.back()<<endl;

}
