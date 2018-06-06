#include<iostream>

using namespace std;

int jiechen(int n);

int main()
{
    int n,k;

    cout << "Input n : " << endl;
    cin >> n;
    cout << "Input k : " << endl;
    cin >> k;

    int cc = jiechen(n)/(jiechen(k)*jiechen(n-k));

    cout << endl << cc << endl;


}

int jiechen(int n)
{
    if(n==1)
        return 1;
    else
        return n*jiechen(n-1);
}
