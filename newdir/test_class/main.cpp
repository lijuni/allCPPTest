#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include<vector>

using namespace std;

class Base{
public:
	Base(string s, int i, double d): Name(s),age(i),salary(d) { cout<<"三个构造函数的初始化"<<endl; }
	Base() { cout<<"默认初始化"<<endl; }
	void show(){ cout<<"Name : "<<Name<<"  Age : "<<age<<"  Salary : "<<salary<<endl; }
	void show2(ostream &os){ os<<"Name : "<<Name<<"  Age : "<<age<<"  Salary : "<<salary<<endl; }
	//string show2(){ return "Name : "+Name+"  Age : "+age+"  Salary : "+salary; }

//private:
protected:
	string Name;
	int age;
	double salary;
};

class RD : public Base{
public:
	RD(string s, int i, double d, int m_u): Base(s, i, d), Month_update(m_u) {}

	void show(){ cout<<"Name : "<<Name<<"  Age : "<<age<<"  Salary : "<<salary<<"  Month_Update : "<<Month_update<<endl; }
protected:
	int Month_update;
};


int main()
{
	ifstream ifs;
	ifs.open("test1.txt");
	ofstream ofs;
	ofs.open("test2.txt", ios::app); //写文件且不覆盖
	string temp;

	vector<Base> vb;

	istringstream is;	//熟悉sstream用法
	while(getline(ifs, temp))
	{
		//cout<<"***"<<temp<<"***"<<endl;
		is.str(temp);		//熟悉sstream
		string name;
		int age;
		double salary;
		if(is>>name>>age>>salary)	//可以用sstring读入不同格式的数据
		{
			//cout<<name<<" "<<age<<" "<<salary<<endl;	
			Base b_temp(name, age, salary);
			vb.push_back(b_temp);
		}
		cout<<endl;
		is.clear();			//重要

	}


	ofstream ofs2("test6.txt", ios::app);
	
	for(auto temp : vb)
	{
		temp.show2(ofs2);
	}

	Base b("Zhang", 18, 2000);
	b.show();
	b.show2(ofs);
	RD r("He", 21, 10000, 12);
	r.show();
	r.show2(ofs);

	ifs.close();
	ofs.close();

	Base b2;
	b2.show();

}
