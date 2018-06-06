#include<iostream>
#include<pthread.h>
#include<cstdlib>
using namespace std;

class InfoPrint
{
public:
    InfoPrint(char c,int n):_c(c),_n(n){}
    void Show() const{ for(int i=0;i<_n;i++) cerr<<_c; }

private:
    char _c;
    int _n;
};

int a=0;

void *ThreadInfo(void * info)
{
    InfoPrint *ip=reinterpret_cast<InfoPrint*>(info);
    if(ip)
        ip->Show();
    a++;
    cout<<"a="<<a<<endl;
    return reinterpret_cast<void*>(a);
}

int main()
{
   pthread_t pt1,pt2;
   int temp;

   InfoPrint *ip1=new InfoPrint('a',5);
   InfoPrint *ip2=new InfoPrint('b',6);

   pthread_create(&pt1,NULL,&ThreadInfo,reinterpret_cast<void *>(ip1));
   pthread_create(&pt2,NULL,&ThreadInfo,reinterpret_cast<void *>(ip2));


   pthread_join(pt1,reinterpret_cast<void **>(&temp));//第二个参数用于接收线程调用的函数的返回值
   pthread_join(pt2,NULL);
    cout<<"temp="<<temp<<endl;
   return 0;

}
