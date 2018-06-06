#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

using namespace std;

const int buf_size=4096;

void Write(const char * msg, FILE * stream)
{
    fprintf(stream,"%s\n",msg);
    fflush(stream);
    sleep(1);
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
    cout<<"Pid = "<<(int)getpid()<<endl;
    cout<<"主进程开始啦"<<endl;

    int pipe_fbs[2];
    pipe(pipe_fbs);
    pid_t pid=fork();

    if(pid==0)
    {
        close(pipe_fbs[1]);
        FILE * stream = fdopen(pipe_fbs[0],"r");
        Read(stream);
        close(pipe_fbs[0]);
    }
    else if(pid>0)
    {
        close(pipe_fbs[0]);
        char buf[buf_size];
        for(int i=0;i<buf_size-2;i++)
            buf[i]='A'+i%26;
        buf[buf_size-2]=buf[buf_size-1]='\0';
        FILE *stream=fdopen(pipe_fbs[1],"w");
        Write(buf,stream);
        close(pipe_fbs[1]);

    }




    return 0;
}


