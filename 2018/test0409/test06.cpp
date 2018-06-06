//P313 forward_list
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
	forward_list<int> fli{0, 1, 2, 3, 5, 6};
	auto prev = fli.before_begin();
	auto curr = fli.begin();
	
	for(auto temp : fli)
		cout<<temp<<" ";
	cout<<endl;

	while(curr!=fli.end())
	{
		if((*curr)%2==0)
		{	
			curr=fli.erase_after(prev);
		}
		else
		{
			prev=curr;
			++curr;
		}
	}
	
	for(auto temp : fli)
		cout<<temp<<" ";
	cout<<endl;


}
