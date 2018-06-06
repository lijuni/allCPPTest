#include<iostream>
#include<string>
#include"Sales_data.h"
int main()
{
	Sales_data book1;
	unsigned count=0;
	double totalPrice=0;
	if(std::cin>>book1.bookNo>>book1.units_sold>>book1.revenue)
	{
		count++;
		totalPrice+=book1.units_sold*book1.revenue;
		Sales_data new_book;
		while(std::cin>>new_book.bookNo>>new_book.units_sold>>new_book.revenue)
		{
			totalPrice+=new_book.units_sold*new_book.revenue;
			if(new_book.bookNo!=book1.bookNo)
			{
				count++;
				book1=new_book;
			}
		}
	}

	std::cout<<"Count = "<<count<<std::endl;
	std::cout<<"TotalPrice = "<<totalPrice<<std::endl;

}
