#include<iostream>
#include<string>
#include"test01.h"

int main()
{
	HasPtr hp1();
	HasPtr hp2("hello");
	HasPtr hp3;
	hp3 = hp2;
	HasPtr hp5 = hp2;
}
