// P365 第二个练习
#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("data_int.txt");
	int i;
	vector<int> vi;

	while(in>>i)
		vi.push_back(i);

	for(auto end = vi.rbegin(); end != vi.rend(); ++end)
		cout<< *end <<"  ";
	cout<<endl;

	for(auto z = --(vi.cend()); z != --(vi.cbegin()); z--)
		cout<< *z <<"  ";
	cout<<endl;


}
