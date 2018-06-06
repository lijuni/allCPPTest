#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int countAlp=0;
	int countCha=0;

	while(getline(cin, s))
	{
		countAlp=0;
		countCha=0;
		for(auto c : s)
		{
			switch(c)
			{
				case 'a':case 'A':
					countAlp++;
					break;
				case 'e':
				case 'E':
					countAlp++;
					break;
				case 'i':
					countAlp++;
					break;
				case '\t':
				case '\n':
				case ' ':
					countCha++;
					break;
			}
		}
		cout<<"Alpha : "<<countAlp<<endl;
		cout<<"Cha   : "<<countCha<<endl;
	}

}
