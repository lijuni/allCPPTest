#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::vector;

int main()
{
	vector<int> vi;
	for(decltype(vi.size()) index=0; index<10; index++)
		vi.push_back(index);

	std::cout<<endl<<"我是分割线"<<endl;

	for(decltype(vi.size()) index=0; index<vi.size(); index++)
		std::cout<<vi[index]<<endl;

}
