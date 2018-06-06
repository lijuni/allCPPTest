#include<iostream>
using namespace std;
int i =8;
int main()
{
	int i=100;
	int j=i;
	std::cout<<"j = "<<j<<std::endl;
	j=::i;
	std::cout<<"j = "<<j<<std::endl;
	
	return 0;
}
