#include<iostream>
#include<thread>
using namespace std;

void ThreadFunc(int a,int b)
{
    std::cout<<"Thread ID: "<<std::this_thread::get_id()<<std::endl;
    std::cout<<a+b<<endl;
}

int main()
{
    int m=10,n=20;
    std::thread t(&ThreadFunc,m,n);
    t.join();
    return 0;
}
