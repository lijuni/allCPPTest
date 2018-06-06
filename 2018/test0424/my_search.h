#ifndef MY_SEARCH_H
#define MY_SEARCH_H

#define DEBUG

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<sstream>

using namespace std;

class QueryResult;

class TextQuery
{

friend QueryResult;

public:
	void show() const;
	void push_back(const string &s);

private:
	vector<string> data;

};

void TextQuery::show() const
{
	for(auto temp : data)
		cout<<temp<<endl;
	cout<<endl;
}

void TextQuery::push_back(const string &s)
{
	data.push_back(s);
}


class QueryResult
{
public:
	QueryResult() : times(0) {}
	QueryResult(string s, int t) : element(s), times(t) {}
	QueryResult(string s) : element(s), times(0) {}
	//void show() { cout<<element<<" occurs "<<times<<" times"<<endl;}
	void show(TextQuery textdata);
	void search(TextQuery textdata, string s);
private:
	string element;
	int times;
	bool flag = false;
	vector<int> count;
};


void QueryResult::show(TextQuery textdata) 
{ 
	cout<<element<<" occurs "<<times<<" times"<<endl;
	if(times>0)
	{
		vector<string>::iterator it = textdata.data.begin();
		for(auto temp : count)
		{
			cout<<*(it+temp)<<endl;
		}
	}
}

void QueryResult::search(TextQuery textdata, string s)
{
	#ifndef DEBUG
	element = s;
	times = 0;
	#endif
	int i=0;
	for(auto temp : textdata.data)
	{
		istringstream iss(temp);
		string word;
		bool flag_temp = false;
		while(iss>>word)
		{
			if(word == s)
			{
				flag = true;
				flag_temp = true;
				#ifndef DEBUG
				cout<<"FIND"<<endl;
				#endif
			}
		}
		if(flag_temp)
		{
			++times;
			count.push_back(i);
		}
		i++;
	}
	show(textdata);
	//cout<<"times = "<<times<<endl;
}






#endif
