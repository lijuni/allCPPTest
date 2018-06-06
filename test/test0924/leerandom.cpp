#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void Randomize()
{
    srand((int)time(0));
}

int GenerateRandomNumber(int low , int high)
{
    return (double)rand()/RAND_MAX*(high-low)+low;
}

double GenerateRandomReal(double low , double high)
{
    return (double)rand()/RAND_MAX*(high-low)+low;
}
