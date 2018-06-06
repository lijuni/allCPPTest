#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

void Randomize();
int GenerateRandomNumber(int low,int high);

int main()
{

    int l,h;

    cout << "Input l : " << endl;
    cin >> l;
    cout << "Input h : " << endl;
    cin >> h;

    srand((int)time(0));

    for(int i=0;i<5;i++)
        cout << "The  " << i+1 << "st num is : " << GenerateRandomNumber(l,h) << endl;

    return 0;

}


int GenerateRandomNumber(int low, int high)
{
    int size = high-low;

    return (double)rand()/(RAND_MAX+1.0)*(size+1) + low;

}

void Randomize()
{
    srand((int)time(NULL)); //
}
