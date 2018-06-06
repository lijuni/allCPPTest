#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi;
	int i;
	while(cin>>i)
		vi.push_back(i);
	cout<<endl<<endl;

	vector<int>::const_iterator begin,end;
	begin=vi.cbegin();
	end=vi.cend();
	end--;

	while(begin<end)
	{
		cout<<"sum"<<*begin+*end<<endl;
		begin++;
		end--;
	}

}
