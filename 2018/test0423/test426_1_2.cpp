#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s1 = "sure", s2 = "fire";
	char *cnew = new char[s1.size()+s2.size()+1];
	int i=0;
	
	for(auto temp : s1)
		cnew[i++] = temp;
	
	for(auto temp : s2)
		cnew[i++] = temp;
	
	cnew[i] = '\0';

	for(int i=0; cnew[i]!='\0'; i++)
		cout<<cnew[i]<<" ";
	cout<<endl;

}
