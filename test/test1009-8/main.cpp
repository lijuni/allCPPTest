#include<signal.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>
sig_atomic_t child_exit_status;
extren "C" {
    void CleanUp(int sig_num)
    {
        int status;
        wait(&status);
        child_exit_status=status;
    }
}

int main()
{
    struct sigaction sa;
    memset(&sa,0,sizeof(sa));
    sa.sa_handler=&CleanUp;
    sigaction(SIGCHLD,&sa,NULL);

    return 0;
}
