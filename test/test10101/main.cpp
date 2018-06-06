#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

using namespace std;

const int buf_size=4096;

void Write(const char *msg,int count,FILE *stream)
{
    for(;count>0;count--)
    {
        fprintf(stream,"%s\n",msg);
        fflush(stream);
        sleep(1);
    }
}

void Read(FILE *stream)
{
    char buf[buf_size];
    while(!feof(stream)&&!ferror(stream)&&fgets(buf,sizeof(buf),stream)!=NULL)
    {
        fprintf(stdout,"Data received:\n");
        fputs(buf,stdout);
    }
}

int main()
{
    int fds[2];
    pipe(fds);
    pid_t pid = fork();
    if(pid==0)
    {
        close(fds[1]);
        FILE *stream = fdopen(fds[0],"r");
        Read(stream);
        close(fds[0]);
    }
    else if(pid>0)
    {
        char buf[buf_size];
        for(int i=0;i<buf_size-2;i++) buf[i]='A'+i%26;
        buf[buf_size-1]=buf[buf_size-2]='\0';
        close(fds[0]);
        FILE *stream=fdopen(fds[1],"w");
        Write(buf,3,stream);
        close(fds[1]);
    }
    return 0;
}
