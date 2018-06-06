#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
	vector<string> vs;
	string s;
	while(cin>>s)
		vs.push_back(s);

	sort(vs.begin(), vs.end());
	auto bj = unique(vs.begin(), vs.end());
	vs.erase(bj, vs.end());

	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;

}
