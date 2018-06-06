#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<fstream>
#include<sstream>
using namespace std;


void word_transform(ifstream &map_file, ifstream &input);
map<string, string> buildMap(ifstream &map_file);
const string & transform(const string &s, const map<string, string> &m);

int main()
{
	ifstream map_file("compare.txt");
	ifstream input;
	input.open("data.txt");

	word_transform(map_file, input);
}

void word_transform(ifstream &map_file, ifstream &input)
{
	map<string, string> map_table = buildMap(map_file);
	string s;
	while(getline(input, s))
	{
		istringstream iss(s);
		string word;
		while(iss>>word)
		{
			cout<<transform(word, map_table)<<"  ";
		}
		cout<<endl;
	}
}

map<string, string> buildMap(ifstream &map_file)
{
	map<string, string> map_table;
	string key;
	string mapped;
	while(map_file>>key)
	{
		map_file>>mapped;
		#ifndef DEBUG
		cout<<"key = "<<key<<"   mapped = "<<mapped<<endl;
		#endif
		//map_table[key]=mapped;
		map_table.insert({key, mapped});
	}
	
	#ifndef DEBUG
	cout<<"建立map结束"<<endl;
	for(auto temp : map_table)
		cout<<"key "<<temp.first<<"  value "<<temp.second<<endl;
	#endif
	return map_table;
}


const string & transform(const string &s, const map<string, string> &m)
{
	if(m.find(s)!=m.end())
	{
		auto temp = m.find(s);
		//cout<<temp->second<<endl;
		return temp->second;
	}
		//cout<<m[s]<<endl;
		//return m[s];
	else
		return s;
}

