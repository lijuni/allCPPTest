#include<iostream>

using namespace std;

int main()
{
    int nine[10];

    for(int i=0;i <= 9;i++)
        nine[i]=i;

    cout << "------------------------------" << endl;

    for(int i=0;i <= 9;i++)
    {
        if(i==0)
            cout << "   ";
        else
            cout << " " << i << " ";
        //
    }
    cout  << endl;

    cout << "------------------------------" << endl;

    for(int i=1;i <= 9;i++)
    {
        for(int j=0;j<=9;j++)
        {
            if(j==0)
                cout << " " << i << " ";
            else
            {
                if(j>=i)
                    if(j*i<10)
                        cout << " " << j*i << " ";
                    else
                        cout << j*i << " ";
                else
                    cout << "   ";

            }
        }
        cout << endl;

    }

    cout << "------------------------------" << endl;


}
