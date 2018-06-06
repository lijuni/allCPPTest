//6.3.2 节练习 6.30
#include<iostream>
using namespace std;

bool str_substring(const string &str1, const string str2)
{
	if(str1.size()==str2.size())
		return str1==str2;
	
	auto size = (str1.size()<str2.size()? str1.size() : str2.size());

	for(decltype(size)i=0; i!=size; i++)
	{
		if(str1[i]!=str2[i])
			return false;
	}
}

int main()
{
	cout<<str_substring("Nikon1","Nikon")<<endl;
	return 0;
}
