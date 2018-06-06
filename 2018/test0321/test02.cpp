#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	const vector<string> Alpha={"F", "D", "C", "B", "A", "A++"};
	int score_num;
	string score;

	while(cin>>score_num)
	{
		score=(score_num<60?Alpha[0]:Alpha[(score_num-50)/10]);
		cout<<score<<endl;
	}

}
