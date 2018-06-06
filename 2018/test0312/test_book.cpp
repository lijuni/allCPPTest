#include<iostream>
#include<string>
#include"Sales_data.h"
int main()
{
	Sales_data book1,book2;
	double price;
	
	std::cout<<"Please book1 : isbn, sold, price "<<std::endl;
	std::cin>>book1.bookNo>>book1.units_sold>>price;
	book1.revenue = book1.units_sold*price;

	std::cout<<"Please book2 : isbn, sold, price "<<std::endl;
	std::cin>>book2.bookNo>>book2.units_sold>>price;
	book2.revenue = book2.units_sold*price;

	if(book1.bookNo==book2.bookNo)
	{
		int count=book1.units_sold+book2.units_sold;
		double revenue=book1.revenue+book2.revenue;
		std::cout<<std::endl;
		std::cout<<"ISBN : "<<book1.bookNo<<std::endl;
		std::cout<<"Count : "<<count<<std::endl;
		std::cout<<"TotalRevenue : "<<revenue<<std::endl;
	
		if(count!=0)
			std::cout<<"Revenue : "<<revenue/count<<std::endl;
		else
			std::cout<<"Sold is Nono"<<std::endl;

		return 0;
	}
	else
	{
		std::cout<<"The 2 books is not the same , can not count "<<std::endl;
		return -1;
	}
}
