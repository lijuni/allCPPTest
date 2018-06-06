//P337 algorithm -> count 类似于find， 返回出现次数
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main()
{
	vector<int> vi{0, 1, 2, 1, 3, 5, 6, 6, 8, 9, 9, 8, 6, 8};

	cout<< count(vi.cbegin(), vi.cend(), 1) <<endl;
	cout<< count(vi.cbegin(), vi.cend(), 6) <<endl;

	
	auto flag = find(vi.cbegin(), vi.cend(), 2);

	cout<< (flag==vi.cend()?"not find":"find")<<endl;
	cout<< "position is "<< flag-vi.cbegin()  <<endl;

	list<string> ls;
	string s;
	
	while(getline(cin, s))
		ls.push_back(s);

	//cout<<"First input succedd"<<endl;
	//getline(cin, s);
	cout<<endl<< "find "<<s<<" "<< count(ls.cbegin(), ls.cend(), "hello")<<" times "<<endl;


}
