#include<iostream>
using namespace std;

int main()
{
	char cc;
	int vowel=0;
	int other=0;
	while(cin>>cc)
	{
	
		switch(cc)
		{
			case 'a':
			case 'e':
			case 'i':
				vowel++;
				break;
			default:
				other++;
				break;
		}

	}
	cout<<"vowel : "<<vowel<<endl;
	cout<<"other : "<<other<<endl;
}
