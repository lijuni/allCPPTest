#include<iostream>
using namespace std;
int value=33;
int main()
{
	std::cout<<"The 1st : "<<value<<std::endl;
	int value=6;
	std::cout<<"The 2st : "<<value<<std::endl;
	std::cout<<"The 3st : "<<::value<<std::endl;
}
