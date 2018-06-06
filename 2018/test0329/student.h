#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class student{

public:
	student()=default;
	student(const string &name, const int &id);

	void setName(const string &name);
	void setId(const int &id);

	string getName() const;
	int getId() const;

	friend ostream &print(ostream &os, const student &sd1);

private:
	string name;
	int id;
};

/*
student::student(const string &name, const int &id)
{
	this.name=name;
	this.id=id;
}
*/

ostream &print(ostream &os, const student &sd1);

ostream &print(ostream &os, const student &sd1)
{
	os<<"name : "<<sd1.name<<endl;
	os<<"id   : "<<sd1.id<<endl;
	return os;
}

student::student(const string &name, const int &id) : name(name),id(id) {}

void student::setName(const string &name)
{
	this->name=name;
}

void student::setId(const int &id)
{
	(*this).id=id;
}

string student::getName() const
{
	return this->name;
}

int student::getId() const
{
	return this->id;
}


#endif
