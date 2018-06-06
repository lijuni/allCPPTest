#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	

	if(getline(cin, s))
	{
		char *cnew = new char[s.size()-3];
		size_t i = 0;
		for(auto temp : s)
		{
			cnew[i++]=temp;
			//cout<<i-1<<" ";
			//cout<<"test  "<<cnew[i-1]<<endl;
		}
		cnew[i] = '\0';

		//for(int i=0; i<s.size()+1; i++)
		//	cout<<cnew[i]<<"test1";

		
		for(auto p = cnew ; *p!='\0'; p++)
			cout<<*p;
		cout<<endl;
		
	}


}
