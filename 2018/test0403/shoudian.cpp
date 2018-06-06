#include<iostream>
#include<string>
#include<vector>
#include"shoudian.h"

using namespace std;

int main()
{
	shoudian sd1;
	shoudian sd2("Zebralight", 88, 88, 2230);
	
	print(cout, sd1);
	print(cout, sd2);
}
