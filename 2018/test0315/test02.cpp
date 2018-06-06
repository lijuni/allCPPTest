#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int i=12/3*4+5*15+24%4/2;
	//cout<<i<<endl;
	//cout<<-30*3+21/5<<endl;
	//cout<<-30+3*21/5<<endl;
	//cout<<30/3*21%5<<endl;
	//cout<<-30/3*21%4<<endl;

	vector<int> vi;

	for(i=0; i<10; i++)
		vi.push_back(i);

	for(auto &temp : vi)
		cout<<(temp%2==0?"偶数":"奇数")<<endl;

	for(const auto &tmp : vi)
		cout<<tmp<<"  ";
	cout<<endl;

}
