#include<iostream>
#include<string>
int main()
{
	std::string s;
	getline(std::cin, s);
	
	for(auto &c : s)
	{
		if(islower(c))
		{
			c=toupper(c);
		}
	}

	std::cout<<s<<std::endl;
	return 0;
}
