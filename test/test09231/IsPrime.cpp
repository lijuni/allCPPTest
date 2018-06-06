#include<iostream>

using namespace std;

bool isPrime(int a);

int main()
{
    int a;
    cout << "Please Input a Number : " << endl;
    while(true)
    {
        cin >> a;
        if(a>2)
            break;
        else
            cout << "Input Again ! " << endl;
    }
    cout << isPrime(a) << endl;
}

bool isPrime(int a)
{
    for(int i=a-1;i>=2;i--)
    {
        if(a%i==0)
            return 1;
    }
    return 0;
}
