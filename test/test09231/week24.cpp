#include<iostream>

using namespace std;

int main()
{
    int a=0;

    do {

    cout << "Please Input day (1~31) :" << endl;
    cin >> a;

    }while(a<1||a>31);

    a+=4;

    int b = a%7;
    //4+1个空格

    cout << "Calerdar 2006-12" << endl;
    cout << "----------------------------" << endl;
    cout << "Su  Mo  Tu  We  Th  Fr  Sa  " << endl;
    cout << "----------------------------" << endl;

    for (int i=0;i<b*4+1;i++)
        cout << " " ;
    cout << "1" << endl;

    cout << "----------------------------" << endl;






}
