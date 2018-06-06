//7.3.1节第一个练习
#ifndef SCREEN_H
#define SCREEN_H

#include<iostream>
#include<string>
#include<vector>


using namespace std;
using std::string;

class screen;
//class windows_mgr;


class windows_mgr{

public:
	using ScreenIndex = std::vector<screen>::size_type;
	void clear(ScreenIndex);
	

private:
	std::vector<screen> screens;
	//screen myScreen23(5, 5, 'x');
	//std::vector<screen> screens{screen(25, 80, 'x')};
	//上面这行代码与书上的完全一样，但是就是通不过，改成第25行后通过，书本P252待解决
};




class screen{

	friend class windows_mgr;
	
public:
	//using pos=std::string::size_type;
	typedef std::string::size_type pos;

	screen()=default;
	screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht*wd, c) {}
	
	char get() const
	{
		return contents[cursor];
	}

	inline char get(pos ht, pos wd) const;
	screen &move(pos r, pos c);

	screen &set(char);
	screen &set(pos , pos, char);

	screen &display(ostream &os)
	{
		do_display(os);
		return *this;
	}

	const screen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}

	pos size() const;

private:
	pos cursor=0;
	pos height=0, width=0;
	std::string contents;

	void do_display(ostream &os) const
	{
		os<<contents<<endl;
	}

};

screen::pos screen::size() const
{
	return height*width;
}

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

inline screen &screen::set(char c)
{
	contents[cursor]=c;
	return *this;
}

inline screen &screen::set(pos r, pos col, char c)
{
	contents[r*width+col]=c;
	return *this;

}


void windows_mgr::clear(ScreenIndex id)
{
	screen &s = screens[id];
	s.contents = string(s.height*s.width, ' ');
}





#endif
