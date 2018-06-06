#include<iostream>
#include<string>

using namespace std;

int main()
{
	char *ca = "hello";
	char *cb = "world";
	char *cnew = new char [100];
	int i=0;
	for(auto temp = ca; *temp!='\0'; temp++, i++)
		//cout<<*temp<<endl;
		cnew[i]=*temp;

	for(char *temp = cb; *temp!='\0'; temp++, i++)
		cnew[i] = *temp;
	
	cnew[i]='\0';

	for(auto temp = cnew; *temp!='\0'; temp++)
		cout<<*temp<<" ";
	cout<<endl;

}
