#include<iostream>
#include<cstdlib>
#include<signal.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
using namespace std;

extern "C"
{
    void XinhaoChuli(int a)
    {
        cout<<"这是信号处理函数"<<endl;
    }
}

int main()
{
    cout<<"Pid = "<<(int)getpid()<<endl;

    struct sigaction sigReal;
    memset(&sigReal,0,sizeof(sigReal));

    sigReal.sa_handler=&XinhaoChuli;

    sigaction(SIGUSR1,&sigReal,NULL);

    sleep(100);
    return 0;

}
