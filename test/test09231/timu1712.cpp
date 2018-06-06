#include<iostream>

using namespace std;

int main()
{
    double Save,lixi;
    double Sum;

    cout << "Please Input How much Money You want to Save : ";
    cin >> Save;
    cout << "Please Input The lixi : ";
    cin >> lixi;

    Sum = Save += Save *(lixi/100.0f);

    Sum*=100;
    cout << "1 : " << Sum << " yuan ." << endl;
    Sum/=(int)1;
    cout << "2 : " << Sum << " yuan ." << endl;
    Sum=(int)Sum/100.0f;

    cout << "After a year , You will get : " << Sum << " yuan ." << endl;
}
