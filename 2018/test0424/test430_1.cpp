#include<iostream>
#include<string>
#include<vector>
#include<memory>

using namespace std;

int main()
{
	size_t n=100;
	allocator<string> alloc;
	auto const p = alloc.allocate(n);
	auto q = p;
	string s;

	while(getline(cin, s)  && q!=p+n)
	{
		*(q++) = s;
	}

	const size_t size= q-p;

	cout<<"----------------END--------------------"<<endl<<endl;

	for(size_t i=0; i<size; i++)
		cout<<*(p+i)<<endl;

	for(size_t i=0; i<size; i++)
		alloc.destroy(p+i);
	alloc.deallocate(p, size);

}
