#include<iostream>
#include<string>

using namespace std;

class HasPtr
{
public:
	HasPtr(const string &s = string()) : ps(new string(s)), i(0) {}
	HasPtr(const HasPtr &hp)
	{
		cout<<"这是拷贝构造函数 "<<endl;
		ps = hp.ps;
		i = hp.i;
	}
	~HasPtr() { cout<<"执行析构函数"<<endl; }
	HasPtr& operator = (const HasPtr &hp)
	{
		cout<<"重载 opetator = "<<endl;
		ps = hp.ps;
		i = hp.i;
	}

private:
	string *ps;
	int i;

};
