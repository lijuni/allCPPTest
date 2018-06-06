//复习文件读写
#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main()
{
	ifstream in1("file1.txt");
	ofstream out1;
	out1.open("out1.txt", ofstream::app);

	string s;
	if(in1)
	{
		while(getline(in1, s))
		{
			cout<<s<<endl;
			out1<<s<<"---";	
		}
	}
	else
	{
		cout<<"Open file1 FAIL!"<<endl;
	}

	if(out1)
	{
		cout<<endl<<"Open outFile SUCCESS!"<<endl;
	}
	else
	{
		cout<<endl<<"Open outFile FAIL!"<<endl;
	}


}
