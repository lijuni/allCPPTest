// P339 第一/二个练习
#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>

using namespace std;

int main()
{
	vector<int> vi{0, 1, 2, 3, 4, 5, 6};

	int sum  =  accumulate(vi.cbegin(), vi.cend(), 0);

	cout<<"sum = "<<sum<<endl;

	vector<double> vd{0.1, 1.2, 5.3};
	
	double sum2 = accumulate(vd.cbegin(), vd.cend(), (double)0);
	cout<<"sum2 = "<<sum2<<endl;


}
