//P262 第一个练习题
#include<iostream>
#include<string>
using namespace std;

class Glim{

public:
	Glim()=default;
	Glim(string s, int l, int e) : material(s), lumen(l), energy(e) { cout<<"三个参数构造"<<endl; }
	Glim(string s, int l) : material(s), lumen(l) { cout<<"两个参数构造"<<endl; }
	Glim(string s) : Glim("Cu", 200, 2100) { cout<<"第一个委托构造函数"<<endl; }

private:
	string material;
	int lumen;
	int energy;
};
