#include<iostream>

using namespace std;

int Add(int a,int b);

int main()
{


    int a,b;

    cout << "Input A : " << endl;
    cin >> a;
    cout << "Input B : " << endl;
    cin >> b;

    cout << "a  + b = " << endl << Add(a,b) << endl;

    return 0;

}

int Add(int a,int b)
{
    return a+b;
}
