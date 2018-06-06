#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;
using std::vector;

int main()
{
	vector<int>::iterator it1;
	string::iterator it2;

	vector<int> vi1;
	for(int i=0;i<10;i++)
		vi1.push_back(i);

	string s1="I Love Yunyun";

	for(it1=vi1.begin(); it1!=vi1.end(); it1++)
		std::cout<<*it1<<endl;

	for(it2=s1.begin(); it2!=s1.end(); it2++)
		std::cout<<*it2<<endl;

}
