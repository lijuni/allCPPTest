#include<iostream>

using namespace std;

int main()
{
    int age,service_years;
    int level[3] = {0,1,2};
    int service_level = level[0];

    cout << "Please Input years : " << endl;
    cin >> service_years;
    cout << "Please Input age : " << endl;
    cin >> age;

    if(service_years<=5)
    {
        if(age>=28)
            service_level=level[1];
    }
    else
        service_level=level[2];

    cout << service_level << endl;

}
