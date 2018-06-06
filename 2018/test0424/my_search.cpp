#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>

#include"my_search.h"

using namespace std;

int main()
{
	TextQuery textdata;
	string s;
	while(getline(cin, s)&&s!="")
		textdata.push_back(s);
	cout<<"-----READ END-----"<<endl<<endl;

	textdata.show();

	cout<<"please input the string you want to search : "<<endl;
	while(cin>>s)
	{
		QueryResult  qs(s);
		qs.search(textdata, s);
		cout<<endl;
	
		cout<<"please input the string you want to search : "<<endl;
	}


}
