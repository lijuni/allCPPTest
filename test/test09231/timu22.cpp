#include<iostream>

using namespace std;

int main()
{

    int a,b;

    cout << "Please Input two Number" << endl;
    cout << "The 1st Number : " << endl;
    cin >> a;
    cout << "The 2st Number : " << endl;
    cin >> b;

    cout << "The Bigger Number is : " <<endl;
    int c = a>b?a:b;
    cout << c << endl;

    return 0;

}


