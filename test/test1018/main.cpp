#include<iostream>
#include<cstdlib>
using namespace std;

#define N 8

void Swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}



int main()
{
   int a[N]={1,2,3,4,5,6,7,8};

   for(int i=0;i<N/2;i++)
        Swap(a[i],a[N-1-i]);

    //Diandao(a,N);

    for(int i=0;i<N;i++)
        cout<<a[i]<<"  ";

    system("pause");
    return 0;

}
