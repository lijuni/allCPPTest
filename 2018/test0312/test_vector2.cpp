#include<iostream>
#include<vector>

using namespace std;
using std::vector;

int main()
{
	vector<int> vi;
	for(int i=0; i<100; i++)
		vi.push_back(i);

	vector<string> vs;
	
	
	string s;
	/*
	while(getline(cin, s))
		vs.push_back(s);

	return 0;
	*/
	
	int i;
	vector<int> vi2;
	while(cin>>i)
		vi2.push_back(i);
	
	//for(i=0; i<vi2.size(); i++)
	//	cout<<vi2[i]<<endl;

	for(auto &i : vi2)
		i*=2;

	for(auto i : vi2)
		cout<<i<<endl;


}
