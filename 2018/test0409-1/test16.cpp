#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> vs;
	auto iter=vs.begin();
	string word;
	while(cin>>word)
		iter=vs.insert(iter, word);
		//vs.insert(iter, word);

	for(auto temp : vs)
		cout<<temp<<" ";
	cout<<endl;
}
