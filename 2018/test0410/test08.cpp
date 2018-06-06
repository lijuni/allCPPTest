// find
#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s{"temp2temp"};
	string s2="12temp89";

	string num{"0123456789"};
	string alpha{"abcdefghijklmnopqrstuvwxyz"};

	cout<<"s  = "<<s<<endl;
	cout<<"s2 = "<<s2<<endl;

	auto a0 = s.find_first_of(alpha, 5);
	auto a1 = s.find_first_of(num);
	auto a2 = s.find_first_of(alpha);
	auto a3 = s2.find_first_of(num);
	auto a4 = s2.find_first_of(alpha);
	auto a5 = s.find("e");
	auto a6 = s.rfind("e");

	auto a7 = s.find_first_not_of(alpha);
	auto a8 = s2.find_last_of(num);

	cout<<a0<<endl
		<<a1<<endl
		<<a2<<endl
		<<a3<<endl
		<<a4<<endl
		<<a5<<endl
		<<a6<<endl
		<<a7<<endl
		<<a8<<endl;

}
