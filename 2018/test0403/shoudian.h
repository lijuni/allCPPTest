//复习类的代码

#ifndef SHOUDIAN_H
#define SHOUDIAN_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class shoudian{
	
public:
	shoudian()=default;
	shoudian(string s, double d1, double d2, int i) : model(s), length(d1), weight(d2), liuming(i) {}

	void resetModel(string s);
	void resetLiuming(int i);
	//下面这个const非常重要，没有的话会导致编译错误
	string getModel() const;
	int getLiuming() const;

private:
	string model;
	double length=0;
	double weight=0;
	int liuming=0;
};

//ostream &print(ostream &os, const shoudian &sd);

ostream &print(ostream &os, const shoudian &sd)
{
	os<<"MODEL : "<<sd.getModel()<<endl;
		//<<"length  "<<sd.length<<endl
		//<<"weight  "<<sd.weight<<endl
	os<<"liuming "<<sd.getLiuming()<<endl;
}

void shoudian::resetModel(string s)
{
	this->model=s;
}

void shoudian::resetLiuming(int i)
{
	this->liuming=i;
}

string shoudian::getModel() const
{
	return this->model;
}

int shoudian::getLiuming() const
{
	return this->liuming;
}



#endif
