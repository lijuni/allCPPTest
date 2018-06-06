#include<iostream>
using namespace std;
std::string global_str;
int global_int;
int main()
{
	std::string local_str;
	int local_int;

	std::cout<<global_str<<std::endl;
	std::cout<<global_int<<std::endl;
	std::cout<<"-------------------"<<std::endl;
	std::cout<<local_str<<std::endl;
	std::cout<<local_int<<std::endl;
	
}
