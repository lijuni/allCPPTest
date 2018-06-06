#ifndef QIANDAO_H
#define QIANDAO_H

#include<iostream>
#include<string>
using namespace std;

class Employee
{
public:
	Employee() = default;
	Employee(string s, int i, double d) : Name(s), Age(i), BaseSalary(d) { cout<<"员工 "<<Name<<" 入职成功"<<endl; }
	bool QD();
	bool QT();
	bool show();
	bool showSalary();
private:
	string Name;
	int Age = 0;
	double Count = 0;
	double Q_start = 0;
	double Q_end = 0;
	bool flag_D = false;
	bool flag_T = false;
	double BaseSalary = 0;
	double SumSalary = 0;
};


#endif
