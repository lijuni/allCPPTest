#include<iostream>
#include<cstdlib>
#include<sys/types.h>
#include<unistd.h>
int spawn(char * program,char ** args);
int main()
{
    char * args[]={"ls","-l","/",NULL};
    spawn("ls",args);
    cout<<"Down";
    return 0;
}

int spawn(char * program, char ** args)
{
    pid_t child_pid=fork();
    if(child_pid!=0)
        return child_pid;
    else
    {
        execvp(program,args);
        std::cerr<<"Error occurred when executing execvp.\n";
        abort();
    }
}
