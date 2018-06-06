//P328 第二个练习
#include<iostream>
#include<string>
#include<vector>
using namespace std;
class date{

public:
	date() = default;
	//date(string s);
	date(string s);
	void show();
private:
	int year;
	int month;
	int day;
};

int main()
{
	date n("1990/1/1");
	n.show();
	cout<<endl;
	string s;

	while(cin>>s)
	{
		date temp(s);
		temp.show();
	}
}


date::date(string s)
{
	
	vector<string> vs;

	string::size_type beg=0;
	string::size_type pos=0;
	string::size_type size=0;
	//int beg=0;
	//int pos=0;
	//int size=0;
	int flag = 0;

	while( (pos = s.find_first_of("/", pos)) != string::npos )
	{
		//cout<<"beg = "<<beg<<endl;
		//cout<<"pos = "<<pos<<endl;
		size = pos-beg;
		string temp = s.substr(beg, size);
		//cout<<"temp = "<<temp<<endl;
		vs.push_back(temp);
		beg=pos+1;
		++pos;
		//cout<<endl;
	}

	string temp = s.substr(beg, s.size()-beg);
	vs.push_back(temp);


	for(auto temp : vs)
	{
		//cout<<temp<<endl;
		
		if(flag==0)
			year = stoi(temp);
		else if(flag==1)
			month = stoi(temp);
		else
			day = stoi(temp);
		flag++;
		
	}
	//cout<<endl;
}

void date::show()
{
	cout<<"year:month:day "<<year<<" : "<<month<<" : "<<day<<endl;
}





