#include<iostream>
#include<sys/types.h>
#include<unistd.h>
#include<cstdlib>
using namespace std;
int main()
{
    cout<<"The main program process ID is "<<(int)getpid()<<endl;
    pid_t child_pid=fork();
    if(child_pid!=0)
    {
        cout<<"This is the parent process , with id "<<(int)getpid()<<endl;
        cout<<"The Child's process ID is "<<(int)child_pid<<endl;
    }else
    {
        cout<<"This is Child process,with id "<<(int)getpid()<<endl;
    }
    system("pause");
    return 0;
}
