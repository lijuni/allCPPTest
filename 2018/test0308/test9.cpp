#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item Item, CurrItem;
	if(std::cin>>Item)
	{
		int cnt=1;

		while(std::cin>>CurrItem)
		{
			if(CurrItem.isbn == Item.isbn)
			{
				Item+=CurrItem;
				cnt++;
			}
			else
			{
				std::cout<<Item.isbn<<" 出现了 "<<cnt<<" 次 "<<Item<<std::endl;
				Item=CurrItem;
				cnt=1;
			}
		}
		
		std::cout<<Item.isbn<<" 出现了 "<<cnt<<" 次 "<<Item<<std::endl;
	}

	return 0;
}
