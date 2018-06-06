#include<iostream>
using namespace std;
int main()
{
	int i, &r1=i;
	i=5;r1=10;
	std::cout<<"i = "<<i<<" r1 = "<<r1<<std::endl;
}
