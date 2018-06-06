#include<iostream>

using namespace std;

int main()
{
    int i,sum;
    sum=0;


    /*
    cin >> i;


    while(i!=0)
    {
        sum += i;
        cin >> i;
    }
    */
    /*
    for(cin >> i;i!=0;cin >> i)
        sum += i;
     */

    while(true){
        cin >> i;
        if(i==0)
            break;
        sum += i;
    }


    cout << "sum = " << sum << endl;
    return 0;

}
