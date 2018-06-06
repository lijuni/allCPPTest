#include<iostream>
int main()
{
	int a=0, b=0;
	std::cout << "Please Input 2 differenr Number : "<<std::endl;
	std::cin >> a >> b;
	if(a>b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
	a++;
	while(a<b)
		{
			std::cout << "i = " << a << std::endl;
			//std::cout<<"i = "<<i<<"  sum = "<<sum<<std::endl;
			a++;
			
		}
}
