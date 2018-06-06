//P159练习题
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	const vector<char> Alpha={'F', 'D', 'C', 'B', 'A'};
	int score_num;
	string score;

	while(cin>>score_num)
	{
		if(score_num<60)
			score=Alpha[0];
		else
		{
			score=Alpha[(score_num-50)/10];
			if(score_num==100)
				score+="++";
			else if(score_num%10>=8)
				score+="+";
			else if(score_num%10<=2)
				score+="-";
		}
		std::cout<<score<<endl;
	}
}
