#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct person{
	
	std::string name;
	std::string address;

	string r_name() const { return this->name; }
	string r_address() const { return this->address; }
	void r_person() const;
};

	istream &read(istream &, person &);
	ostream &print(ostream &, const person &);

void person::r_person() const
{
	cout<<"Name : "<<this->name<<endl;
	cout<<"Address : "<<this->address<<endl;
}

istream &read(istream &is, person &p)
{
	is>>p.name>>p.address;
	return is;
}

ostream &print(ostream &os, const person &p)
{
	os<<p.name<<"   "<<p.address<<endl;
}



