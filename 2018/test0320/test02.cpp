#include<iostream>
#include<string>
#include<vector>

using std::string;
using namespace std;

int main()
{

	const vector<string> score={"F", "D", "C", "B", "A", "A++"};
	string final_score;

	int i;
	while(cin>>i)
	{
	
		if(i<60)
			final_score=score[0];
		else
		{
			final_score=score[(i-50)/10];
			
			if(i!=100)
				if(i%10>=8)
					final_score+="+";
				else if(i%10<=2)
					final_score+="-";
		}

		cout<<"Final Score : "<<final_score<<endl;
	
	}


}
