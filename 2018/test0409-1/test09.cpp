#include<iostream>
#include<string>
#include<vector>
#include<list>

using namespace std;

int main()
{
	vector<string> vs{"This", "is", "a", "vector", "of", "string"};
	
	vs.insert(vs.begin(),"1st Insert ");
	//vs.insert(1, "2nd Insert ");
	vs.insert(vs.begin()+1, 10, "ten ");
	vs.insert(vs.end(), {"end1", "end2"});
	for(auto temp : vs)
		cout<<temp<<"  ";
	cout<<endl;
	
}
