#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	const char st1[]="Jia Duo Bao";
	const char st2[]="The King Always Lucky";
	char st3[10];
	strcpy(st3,st1);
	strcat(st3,st2);
	cout<<"Length "<<strlen(st3)<<endl;
	cout<<"ST3 "<<st3<<endl;
}
