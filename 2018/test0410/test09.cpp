//P326 重要
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str = "helloworldhellocpphellopython";

	string::size_type pos = 0;

	while( (pos = str.find("hello", pos)) != string::npos )
	{
		cout<<"Find str \"hello\" at "<<pos<<endl;
		++pos;
	}

	auto at = str.rfind("hello", 17);
	cout<<"AT : "<<at<<endl;


}
