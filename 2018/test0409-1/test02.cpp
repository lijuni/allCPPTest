#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<string> vs1{"This", "is", "vs1"};
	vector<string> vs2{"vs2", "is", "me"};

	cout<<"vs1 : ";
	for(auto temp : vs1)
		cout<<temp<<" ";
	cout<<endl;
	cout<<"vs2 : ";
	for(auto temp = vs2.cbegin(); temp!=vs2.cend(); temp++)
		cout<<(*temp)<<" ";
	cout<<endl;

	swap(vs1, vs2);
	cout<<"SWAP"<<endl;
	cout<<"vs1 : ";
	for(auto temp : vs1)
		cout<<temp<<" ";
	cout<<endl;
	cout<<"vs2 : ";
	for(auto temp = vs2.cbegin(); temp!=vs2.cend(); temp++)
		cout<<(*temp)<<" ";
	cout<<endl;

	vs1.swap(vs2);
	cout<<"SWAP"<<endl;
	cout<<"vs1 : ";
	for(auto temp : vs1)
		cout<<temp<<" ";
	cout<<endl;
	cout<<"vs2 : ";
	for(auto temp = vs2.cbegin(); temp!=vs2.cend(); temp++)
		cout<<(*temp)<<" ";
	cout<<endl;


}
