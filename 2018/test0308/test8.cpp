#include<iostream>
using namespace std;
int main()
{
	int currVal=0,Val=0;
	int cnt=0;
	if(std::cin>>Val)
	{
		cnt++;
		while(std::cin>>currVal)
		{
			if(currVal==Val)
				cnt++;
			else
			{
				std::cout<<Val<<" 出现了 "<<cnt<<" 次"<<std::endl;
				Val=currVal;
				cnt=1;
			}
		}
		
		std::cout<<Val<<" 出现了 "<<cnt<<" 次"<<std::endl;

	}
	return 0;
}
