#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> vs={"Wang", "", "Old", "Lucky"};

	/*
	for(auto i : vs)
		cout<<i<<"\t";
	cout<<endl;
	*/

	vector<string>::iterator it=vs.begin();
	//for(; it!=vs.end(); it++)
	//	cout<<++*it<<endl;

	cout<<it++->empty()<<endl;
	cout<<it++->empty()<<endl;
	cout<<it++->empty()<<endl;
	cout<<*it++<<endl;
	

}
