#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using namespace std;
using std::string;
using std::vector;

int main()
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10,42);
	vector<int> v4{10};
	vector<int> v5{10,42};
	vector<string> v6{10};
	vector<string> v7{10, "hi"};

	cout<<v1.size()<<endl;
	//for(decltype(v2.size()) index=0; index<v2.size(); index++)
	//	cout<<v2[index]<<"   ";

	//for(auto c : v1)
	//	cout<<c<<"   ";

	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<dt<<endl;

	for(auto it=v3.cbegin(); it!=v3.cend(); it++)
		cout<<*it<<" ";


	return 0;
}
