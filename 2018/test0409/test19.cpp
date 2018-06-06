#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> svec;
	//svec.reserve(1024);
	
	cout<<"size     : "<<svec.size()<<endl<<"capacity : "<<svec.capacity()<<endl;

	string word="temperature";

	for(int i=0; i<1000; i++)
		svec.push_back(word);
	
	svec.resize(svec.size()+svec.size()/2);

	cout<<"size     : "<<svec.size()<<endl<<"capacity : "<<svec.capacity()<<endl;
}
