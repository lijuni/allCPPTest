//P307 insert(it, val)
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s="Test Cpp Program";
	const string s2="INSERT";	
	string::iterator it=s.begin();
	//s.insert(0, "-INSERT-");
	s.insert(s.begin(), 'X');
	/*因为insert(it, cal)是插入对象的基本元素
	 *所以对string来说，基本元素是char
	 *所以val的形式是 'x' 而不是字符串
	 */
	cout<<s<<endl;
}
