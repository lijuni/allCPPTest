#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<fcntl.h>
using namespace std;

const int buf_size=4096;

int main()
{
    int pipe_fds[2];
    pipe(pipe_fds);
    pid_t pp=fork();

    if(pp==0)//子进程
    {
        close(pipe_fds[0]);
        dup2(pipe_fds[1],STDOUT_FILENO);
        char * args[]={"ls","-l","/",NULL};
        execvp(args[0],args);
    }

    else
    {
        close(pipe_fds[1]);
        char buf[buf_size];
        FILE * stream =fdopen(pipe_fds[0],"r");
        while(!feof(stream))
            fputs(buf,stdout);

        close(pipe_fds[0]);
        waitpid(pp,NULL,0);
    }
    return 0;

}
