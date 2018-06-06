#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char *argv[])
{
	cout<<"argument count = "<<argc<<endl;
	
	for(int i=0; i<argc; i++)
	{
		cout<<"argument vector = "<<argv[i]<<endl;
	}
}
