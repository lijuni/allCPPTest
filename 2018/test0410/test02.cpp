//P322 第2个练习

#include<iostream>
#include<string>

using namespace std;

int main()
{
	char c;
	string s;
	s.reserve(200);
	int size=200;

	while(cin>>c)
	{
		s.push_back(c);
		cout<<"size       = "<<s.size()
			<<"s.capacity = "<<s.capacity()<<endl;
		if(s.size()>=(int)((double)size*0.75))
		{
			size*=2;
			s.reserve(size);
		}
	}

}
