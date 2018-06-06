//练习5.1.2
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int aeiCount=0;
	int twoCount=0;
	bool flag=false;
	bool flagEnter=true;
	while(getline(cin,s))
	{
		for(auto temp : s)
		{
			if(temp=='a'||temp=='e'||temp=='i'||temp=='o'||temp=='u')
				aeiCount++;
			
			if(flag)
			{
				if(temp=='f'||temp=='l'||temp=='i')
				{	
					twoCount++;
					cout<<temp<<endl;
					flag=false;
					cout<<flag<<endl;
					continue;
				}
				//flagEnter=true;
			}

			if(temp=='f')
			{
				flag=true;
				//flagEnter==false;
			}

		}
	}
	cout<<"AEI"<<aeiCount<<endl;
	cout<<"TWO"<<twoCount<<endl;
}
