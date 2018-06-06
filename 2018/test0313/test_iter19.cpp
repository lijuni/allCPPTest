#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	vector<unsigned> stand(11,0);
	vector<unsigned> grade;
	unsigned temp;

	while(cin>>temp)
		grade.push_back(temp);
	cout<<endl<<endl;

	vector<unsigned>::iterator beg;
	beg=stand.begin();

	for(auto it=grade.begin(); it!=grade.end(); it++)
	{
		unsigned score=*it/10;
		cout<<score<<"   ";
		
		(*(beg+score))++;
		
		//++stand[score];
		
		cout<<"Begin"<<*(beg)<<endl;
		//cout<<"Begin"<<*(begin+score)<<endl;
	}
	cout<<endl;

	for(auto it=stand.cbegin(); it!=stand.cend(); it++)
	{
		cout<<*it<<"  ";
	}
	
}
