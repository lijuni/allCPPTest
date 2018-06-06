//测试文件读入并写出
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	in.open("readme1.txt");
	out.open("readme3.txt", ofstream::ate);

	if(in&&out)
	{
		string temp;
		while(getline(in, temp))
		{
			out<<"测试写入文件"<<endl;
			out<<temp<<endl;
		}
		in.close();
		out.close();
	}
	else
	{
		if(!in)
			cout<<"Read File Failed!"<<endl;
		if(!out)
			cout<<"Write FIle Failed!"<<endl;
	}

}
