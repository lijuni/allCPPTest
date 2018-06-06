#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    char * server_name=getenv("SERVER_NAME");
    if(!server_name)
        server_name="server.yours.com";
    cout<<"accessing server : "<<server_name<<endl;
    return 0;
}

char * ReadFromFile(const char * filename,size_t length)
{
    char * buffer =new char[length];
    if(!buffer)
        return NULL:
    int fd=open(filename,O_RDONLY);
    if(fd==-1)
    {
        delete[] buffer,buffer=NULL:
        return NULL:
    }
    size_t bytes_read=read(fd,buffer,length);
    if(bytes_read!=length)
    {
        delete[] buffer,buffer=NULL;
        close(fd);
        return NULL;
    }
    close(fd);
    return buffer;

}
