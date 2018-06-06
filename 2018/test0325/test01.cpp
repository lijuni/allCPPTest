//测试 int main 返回空是否可行
#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	//return ;	//错误，不可行
	//return EXIT_SUCCESS;
	return EXIT_FAILURE;	//echo $? 结果是1
}

