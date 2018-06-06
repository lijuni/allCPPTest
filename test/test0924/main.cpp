#include<iostream>

#include"leerandom.h"

using namespace std;

int main()
{
    Randomize();

    for(int i=0;i<8;i++)
        cout << GenerateRandomNumber(10,100) << endl;

    cout << "------------" << endl;

    for(int i=0;i<8;i++)
        cout << GenerateRandomReal(10,100) << endl;

    return 0;

}
