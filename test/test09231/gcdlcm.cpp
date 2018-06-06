#include<iostream>

using namespace std;

int gcd(int a, int b);
int lcm(int a, int b);
int inputInt(int id);
int Max(int a, int b);

int main()
{
    int a,b;

    while(true)
    {
        a=inputInt(1);
        b=inputInt(2);
        if(a>0&&b>0)
            break;
    }

    cout << "最大公约数是 : " << gcd(a,b) << endl;
    cout << "最小公倍数是 : " << lcm(a,b) << endl;
}

int inputInt(int id)
{
    int a;
    cout << "Please Input a Number " << id << " : ";
    cin >> a;
    return a;
}

int gcd(int a, int b)
{
    return 111111;
}

int lcm(int a, int b)
{
    int lcm1=a*b;
    int max=Max(a,b);
    int c;
    for(c=max;c<lcm1;c++)
    {
        if(c%a==0&&c%b==0)
            return c;
    }

    return lcm1;
}

int Max(int a, int b)
{
    return a>b?a:b;
}
