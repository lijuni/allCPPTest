//P257 第一个练习 测试 typedef 的顺序
#include<iostream>
#include<string>
using namespace std;

typedef char pos;

class Screen{

public:
	typedef std::string::size_type pos;
	void fcn(pos i)
	{
		cursor=w*h;
	}

private:
	pos cursor=0;
	pos w=0,h=0;

};
