#include<pthread.h>
#include<iostream>
#include<list>

struct Job{
    Job(int x=0,int y=0):x(x),y(y){}
    int x,y;
};

std::list<Job *> job_quene;
pthread_mutex_t job_quene_mutex=PTHREAD_MUTEX_INITIALIZER;

void ProcessJob(Job *job)
{
    std::cout<<"Thread "<<(int)pthread_self();
    std::cout<<" processing ( "<<job->x<<","<<job->y<<" )\n";
}

void * DequeneJob(void *arg)
{
    while(true)
    {
        Job *job=NULL;
        pthread_mutex_lock(&job_quene_mutex);
        if(!job_quene.empty())
        {
            job=job_quene.front();
            job_quene.pop_front();
        }
        pthread_mutex_unlock(&job_quene_mutex);
        if(!job) break;
        ProcessJob(job);
        delete job,job=NULL;
    }
    return NULL;
}

void * EnqueneJob(void *arg)
{
    Job *job=reinterpret_cast<Job*>(arg);
    pthread_mutex_lock(&job_quene_mutex);
    job_quene.push_back(job);

    std::cout<<"Thread "<<(int)pthread_self();
    std::cout<<"enqueneing ( "<<job->x<<","<<job->y<<" )\n";

    pthread_mutex_unlock(&job_quene_mutex);
    return NULL;
}


int main()
{
    int i;
    pthread_t threads[8];
    for(i=0;i<5;i++)
    {
        Job *job=new Job(i+1,(i+1)*2);
        pthread_create(&threads[i],NULL,EnqueneJob,job);
    }
    for(i=5;i<8;i++)
        pthread_create(&threads[i],NULL,DequeneJob,NULL);
    for(i=0;i<8;i++)
        pthread_join(threads[i],NULL);
    return 0;
}





















