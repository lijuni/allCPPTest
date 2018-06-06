//P289 第三个练习题
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	ifstream in("readme1.txt");
	ofstream out("write1.txt", ofstream::app);
	string line,word;
	istringstream record;
	
	while(getline(in, line))
	{
		//cout<<"line : "<<line<<endl;
		record.clear();
		record.str(line);
		while(record>>word)
		{
			cout<<word<<"  ";
			out<<word<<"  ";
		}
		cout<<endl;
		out<<endl;
	}


}
