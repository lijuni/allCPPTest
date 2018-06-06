// P339 equal
#include<iostream>
#include<algorithm>
#include<numeric>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<string> vs1{"hey", "judy"};
	vector<string> vs2{"hey", "judy"};
	vector<string> vs3{"hey1", "judy"};

	cout<< "equal 1, 2 " << equal(vs1.cbegin(), vs1.cend(), vs2.cbegin())<<endl;
	cout<< "equal 2, 3 " << equal(vs2.cbegin(), vs2.cend(), vs3.cbegin())<<endl;

}
