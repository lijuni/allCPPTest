#include<iostream>
using namespace std;
int main()
{

	struct Sales_data{
		std::string bookNo;
		unsigned units_sold=0;
		double revenue=0.0;
	}accum, trans;
	Sales_data acc;

	std::cout<<acc.bookNo<<std::endl;
	std::cout<<acc.units_sold<<std::endl;
	std::cout<<acc.revenue<<std::endl;

	acc.bookNo="Ice and Fire Song";
	acc.units_sold=69;
	acc.revenue=39.0;
	std::cout<<acc.bookNo<<std::endl;
	std::cout<<acc.units_sold<<std::endl;
	std::cout<<acc.revenue<<std::endl;

}
