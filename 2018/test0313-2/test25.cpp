#include<iostream>
using namespace std;

int main()
{
	const size_t i=2,j=3;
	
	constexpr size_t rowCnt=5, colCnt=6;
	int ia[rowCnt][colCnt];

	for(size_t i=0; i<rowCnt; i++)
		for(size_t j=0; j<colCnt; j++)
			ia[i][j]=i*10+j;

	for(auto &row : ia)
		for(auto &col : row)
			cout<<col<<"  ";

	cout<<endl;

	for(auto &i : ia)
		for(auto &j : i)
			cout<<j<<"  ";

	cout<<endl;

	int b[i][j]={};
	
	for(auto &i : b)
		for(auto &j : i)
			cout<<j<<endl;


	return 0;

}
