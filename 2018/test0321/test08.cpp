#include<iostream>
using namespace std;

int main()
{
	char cc;
	int count=0;
	int fCount=0;	
	while(cin>>cc)
	{
		switch(cc)
		{
			case 'a':
			case 'A':
				count++;
				break;
			
			case 'e':
			case 'E':
				count++;
				break;

			case 'i':
			case 'I':
				count++;
				break;

			case '\t':
			case '\n':
			case ' ':
				fCount++;
		}
	}
	cout<<"Count : "<<count<<endl;
	cout<<"FCount : "<<fCount<<endl;
}
