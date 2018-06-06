#include<iostream>

using namespace std;

typedef enmu{Sun, Mon, Tue, Wed, Thu , Fri, Sat} WEEKDAY;

int main()
{
    int date;
    const WEEKDAY date_1 = FRI;
    WEEKDAY weekday;
    cin >> date;

    weekday=(WEEKDAY)((date+(int)date_1-1)%7);

    cout << weekday << endl;
    return 0;
}
