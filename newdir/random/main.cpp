#include<iostream>
#include<ctime>  //使用time作为随机数发生器的种子
#include<random>

using namespace std;

int main()
{
	static default_random_engine e1(time(0));
	static default_random_engine e2;
	e2.seed(time(0));

	for(size_t i=0; i<10; i++)
		cout<<e1()<<"   "<<e2()<<endl;

	static uniform_int_distribution<unsigned> ui(0,9);
	for(size_t i=0; i<10; i++)
		cout<<ui(e1)<<endl;

	static uniform_real_distribution<double> ur(0,1);
	for(size_t i=0; i<10; i++)
		cout<<ur(e1)<<endl;

}
