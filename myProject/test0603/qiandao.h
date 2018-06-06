#ifndef QIANDAO_H
#define QIANDAO_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Employee
{
public:
	Employee() = default;
	Employee(string s, int i, double d) : Name(s), Age(i), BaseSalary(d) { cout<<"员工 "<<Name<<" 入职成功"<<endl; }
	bool QD();
	bool QT();
	bool BQ(double i);
	bool show();
	virtual bool showSalary();
	void showCount() { cout<<"Count : "<<Count<<endl; }
	void showHistory();
	string getName() { return Name; }
protected:
	string Name;
	int Age = 0;
	double Count = 0;
	vector<double> History_Count;
	double Q_start = 0;
	double Q_end = 0;
	bool flag_D = false;
	bool flag_T = false;
	double BaseSalary = 0;
	double SumSalary = 0;
};

class Gaogong : public Employee
{
public:
	Gaogong(string s, int i, double d, double a) : Employee(s, i, d), Award(a) { cout<<"高工"<<Name<<" 入职成功"<<endl;}
	bool showSalary();


protected:
	double Award; //高工成员，增加奖金
};


#endif
