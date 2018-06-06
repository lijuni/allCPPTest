#ifndef PERSON_H
#define PERSON_H

//测试类
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class person
{
public:
	person()=default;
	person(string s, int i=18): name(s), age(i) {}

	string getName() const;
	int getAge() const;

	void setName(const string &s);
	void setAge(int i);

private:
	string name;
	int age;
};

string person::getName() const
{
	return this->name;
}

int person::getAge() const
{
	return this->age;
}

void person::setName(const string &s)
{
	this->name=s;
}

void person::setAge(int i)
{
	this->age=i;
}

ostream &print(ostream &os, const person &p)
{
	os<<"Name = "<<p.getName()<<"  Age = "<<p.getAge()<<endl;
	return os;
}

istream &read(istream &is, person &p)
{
	string s;
	int i;
	is>>s>>i;
	p.setName(s);
	p.setAge(i);
	return is;
}







#endif
