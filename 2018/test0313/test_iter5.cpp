#include<iostream>
#include<string>
#include<vector>
#include<ctime>

using namespace std;
using std::string;
using std::vector;

int main()
{
	time_t now=time(0);
	char *dt=ctime(&now);
	cout<<dt<<endl;
	
	vector<string> vs;
	string temp;

	while(getline(cin, temp))
		vs.push_back(temp);

	cout<<"----------------"<<endl;
	
	for(auto it=vs.cbegin(); it!=vs.cend()&&!(*it).empty(); it++)
		cout<<*it<<endl;

	time_t now2=time(0);
	char *dt2=ctime(&now2);
	cout<<dt2<<endl;

}
