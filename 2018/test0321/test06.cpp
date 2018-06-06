//5.3.2节练习
#include<iostream>
using namespace std;

int main()
{
	char cc;
	int count=0;

	while(cin>>cc)
	{
		if(cc=='a'||cc=='e'||cc=='i'||cc=='o'||cc=='u')
			count++;
	}
	cout<<count<<endl;
}
