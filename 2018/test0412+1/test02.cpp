// 10.6 节练习
#include<iostream>
#include<list>
#include<algorithm>
#include<numeric>
#include<fstream>
#include<iterator>
using namespace std;

void show( list<string> ls)
{
	ostream_iterator<string> osit(cout, "  ");
	copy(ls.cbegin(), ls.cend(), osit);
	cout<<endl;
	cout<<endl;
}

int main()
{
	ifstream in("data.txt");
	istream_iterator<string> isit(in), eof;
	
	list<string> listString(isit, eof);
	show(listString);

	listString.sort();
	show(listString);

	listString.unique( [](const string &s1, const string &s2){ return s1==s2; } );
	show(listString);

}
