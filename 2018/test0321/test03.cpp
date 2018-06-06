//P160 Switch
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	char cc;
	unsigned int cntA=0, cntE=0, cntI=0, cntO=0, cntU=0;
	
	while(cin>>cc)
	{
		switch(cc)
		{
			case 'a':
				cntA++;
				break;
			case 'e':
				cntE++;
				break;
			case 'i':
				cntI++;
				break;
			case 'o':
				cntO++;
				break;
			case 'u':
				cntU++;
				break;
		}
	}

	cout<<"a : "<<cntA<<" e : "<<cntE<<" i : "<<cntI<<" o : "<<cntO<<" u : "<<cntU<<endl;

}
