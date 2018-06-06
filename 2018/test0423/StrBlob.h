#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<list>
#include<initializer_list>

using namespace std;

class StrBlobPtr;

class StrBlob{
	friend StrBlobPtr;
public:
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob( initializer_list<string> li);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &s) { data->push_back(s); }
	void pop_back() { check(0, "pop_back"); data->pop_back(); }
	string &front() const;
	string &back() const;

private:
	shared_ptr<vector<string>> data;
	void check( size_type i, const string &msg ) const;
	
};

StrBlob::StrBlob( initializer_list<string> li) : data( make_shared<vector<string>>(li)) {}

StrBlob::StrBlob(){
	data = make_shared<vector<string>>();
}

void StrBlob::check(size_type i, const string &msg) const
{
	if(i>=data->size())
		throw out_of_range(msg);
}

string &StrBlob::front() const{
	check(0, "front");
	return data->front();
}

string &StrBlob::back() const
{
	check(0, "back");
	return data->back();
}

class StrBlobPtr{
public:
	StrBlobPtr() : curr(0) {}
	StrBlobPtr(StrBlob &sb, size_t sz=0) : wptr(sb.data), curr(sz) {}
	string deref() const;


private:
	shared_ptr<vector<string>> check(std::size_t size, const string &s) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;

};

shared_ptr<vector<string>> StrBlobPtr::check(std::size_t size, const string &s) const
{
	auto at = wptr.lock();
	//if(!(auto at = wptr.lock()))
	if(!at)
		throw std::runtime_error(s);
	if(size >= at->size())
		throw std::out_of_range(s);
	return at;
}

string StrBlobPtr::deref() const
{
	shared_ptr<vector<string>> spvs = check(curr, "find");
	return (*spvs)[curr];
}






















