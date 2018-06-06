#include<iostream>
#include<string>
#include<vector>
#include"screen.h"

using namespace std;

int main()
{
	screen myScreen(5, 5, 'x');
	myScreen.move(4, 0).set('#').display(cout);
	cout<<'\n';
	myScreen.display(cout);
	cout<<'\n';
}
