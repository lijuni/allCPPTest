//7.3.1节第一个练习
#ifndef SCREEN_H
#define SCREEN_H

#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;

class screen{

public:
	//using pos=std::string::size_type;
	typedef std::string::size_type pos;

	screen()=default;
	screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd, ' ') {}
	screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}
	
	char get() const
	{
		return contents[cursor];
	}

	inline char get(pos ht, pos wd) const;
	screen &move(pos r, pos c);


private:
	pos cursor=0;
	pos height=0, width=0;
	std::string contents;

};

char screen::get(pos ht, pos wd) const
{
	pos row=ht*width;
	return contents[row+wd];
}

inline screen &screen::move(pos r, pos c)
{
	pos row=r*width;
	cursor=row+c;
	return *this;
}





#endif
