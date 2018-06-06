#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

int main(int argc, char *argv[])
{
	/*
	cout<<argc<<endl;
	for(int i=0; i<argc; i++)
		cout<<argv[i]<<endl;
	*/

	ifstream in;
	ofstream out;
	in.open(argv[1]);
	out.open(argv[2], ofstream::app);

	if(in&&out)
	{
		string temp;
		while(getline(in, temp))
			out<<temp<<endl;
		in.close();
		out.close();
	}
	else
	{
		if(!in)
			cout<<"READ FILE "<<argv[1]<<" FAILED!"<<endl;
		if(!out)
			cout<<"WRITE FILE "<<argv[2]<<" FAILED!"<<endl;
	}

}
