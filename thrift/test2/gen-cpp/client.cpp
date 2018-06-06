	#include "Serv.h"  // Your .h File  
    #include <transport/TSocket.h>  
    #include <transport/TBufferTransports.h>  
    #include <protocol/TBinaryProtocol.h>  
      
    using namespace apache::thrift;  
    using namespace apache::thrift::protocol;  
    using namespace apache::thrift::transport;  
      
    using boost::shared_ptr;  
      
    int main(int argc, char **argv) {  
        boost::shared_ptr<TSocket> socket(new TSocket("localhost", 9090));  
        boost::shared_ptr<TTransport> transport(new TBufferedTransport(socket));  
        boost::shared_ptr<TProtocol> protocol(new TBinaryProtocol(transport));  
      
        transport->open();  
      
        // Your Codes  
      
        transport->close();  
      
        return 0;  
    }  
