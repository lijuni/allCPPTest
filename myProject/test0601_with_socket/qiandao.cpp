#include<iostream>
#include<string>
#include<vector>
#include<ctime>
#include"qiandao.h"
using namespace std;
bool Employee::QD()
{
	time_t now = time(0);
	Q_start = now;
	flag_D = true;
	cout<<Name<<" 在 "<<ctime(&now)<<" 签到成功"<<endl;
	cout<<endl;
	return 0;
}

bool Employee::QT()
{
	if(!flag_D)
	{
		cout<<"尚未签到，请先签到"<<endl;
		return -1;
	}

	time_t now = time(0);
	Q_end = now;
	flag_T = true;
	cout<<Name<<" 在 "<<ctime(&now)<<" 签退成功"<<endl;
	double temp = Q_end - Q_start;
	
	#ifndef DEBUG
	cout<<endl<<"Temp = "<<temp<<endl;
	#endif
	
	if(temp<30)
	{
		cout<<Name<<" 打卡时间过短，无效考勤"<<endl;
	}
	else if(temp<60)
	{
		this->Count+=0.5;
		cout<<Name<<" 考勤记录成功，在线半天"<<endl;
	}
	else
	{
		this->Count+=1;
		cout<<Name<<" 考勤记录成功，在线一天"<<endl;
	}
	cout<<endl;
	History_Count.push_back(Count);
	Count=0;
	return 0;
}


	bool Employee::showSalary()
	{
		double SumDay = 0;
		
		for(auto temp : History_Count)
			SumDay+=temp;
		
		SumSalary = BaseSalary * SumDay;
		cout<<Name<<" 本月出勤 "<<SumDay<<" 天 , 工资为 "<<SumSalary<<endl;
		//Count = 0;
		//SumSalary = 0;
		return 0;
	}

	bool Gaogong::showSalary()
	{
		#ifndef DEBUG
		cout<<"这是高级工程师"<<endl;
		#endif
		double SumDay = 0;	
		for(auto temp : History_Count)
			SumDay+=temp;
		SumSalary = BaseSalary * SumDay;
		SumSalary += Award;
		cout<<Name<<" 本月出勤 "<<SumDay<<" 天 , 工资为 "<<SumSalary<<endl;
		//Count = 0;
		//SumSalary = 0;
		return 0;
	
	}


