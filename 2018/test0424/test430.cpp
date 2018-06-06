#include<iostream>
#include<string>
#include<memory>
#include<vector>

using namespace std;

int main()
{
	allocator<string> allo;
	auto const p = allo.allocate(10);
	auto q = p;

	allo.construct(q++);
	allo.construct(q++, 10, 'c');
	allo.construct(q++, "test");

	cout<<"cout<<*p<<  "<<*p<<endl;
	cout<<"cout<<*p+1<<  "<<*(p+1)<<endl;
	cout<<"cout<<*p+2<<  "<<*(p+2)<<endl;

	vector<string> vs{"this", "is", "vs"};

	q = uninitialized_copy(vs.begin(), vs.end(), q);
	cout<<"cout<<*p+3<<  "<<*(p+3)<<endl;
	cout<<"cout<<*p+5<<  "<<*(p+5)<<endl;
	cout<<"cout<<*p+5<<  "<<*(p+5)<<endl;

	uninitialized_fill_n(q, 3, "end");
	cout<<"cout<<*p+8<<  "<<*(p+6)<<endl;
	cout<<"cout<<*p+6<<  "<<*(p+7)<<endl;
	cout<<"cout<<*p+7<<  "<<*(p+8)<<endl;

}
