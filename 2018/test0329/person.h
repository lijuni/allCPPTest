//7.2节 练习 7.19 
#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class person{

private:
	
	string name;
	string address;

public:

	person()=default;
	person(const string &s1, const string &s2);
	//person::person(const string &s1, const string &s2) : name(s1),address(s2) {}

	void setName(string &s) ;
	void setAddress(string &s) ;
	string getName() const;
	string getAddress() const;

};

//istream &read(istream &is, person &p);
//ostream &print(ostream &os, const person &p);

/*
person::person(const string &s1, const string &s2)
{
	this->name=s1;
	this->address=s2;
}
*/

person::person(const string &s1, const string &s2) : name(s1),address(s2) {}

ostream &print(ostream &os, const person &p)
{
	os<<"Name = "<<p.getName()<<endl;
	os<<"Address = "<<p.getAddress()<<endl;
	return os;
}

istream &read(istream &is, person &p)
{
	string name,address;
	is>>name>>address;
	p.setName(name);
	p.setAddress(address);
	return is;
}


void person::setName(string &s) 
{
	this->name=s;
}

void person::setAddress(string &s) 
{
	this->address=s;
}

string person::getName() const
{
	return this->name;
}

string person::getAddress() const
{
	return this->address;
}

#endif
