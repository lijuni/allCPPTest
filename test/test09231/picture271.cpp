#include<iostream>
#include<iomanip>

using namespace std;



int main()
{

    void kong (int a);
    int n,m;
    cout << "Please Input n : " << endl;
    cin >> n;
    cout << "Please Input m : " << endl;
    cin >> m;

    for(int i=1; i<=n; i++)
    {

        //cout << setw(5);
        kong(5);

        //cout << setw(n-i);
        kong(n-i);
        for(int j=1; j<=2*i-1;j++)
            cout << "*" ;
        //cout << setw(n-i);
        kong(n-i);

        //cout << setw(m);
        kong(m);

        //cout << setw(i-1);
        kong(i-1);
        for(int j=1; j<=2*(n-i)+1;j++)
            cout << "*" ;
        //cout << setw(i-1);
        kong(i-1);

        cout << endl;

        //kong(1);

    }

}

void kong(int a)
{
    for(int i=0;i<a;i++)
        cout << " ";
}

