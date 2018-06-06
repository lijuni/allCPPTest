#include "Serv.h"
#include <thrift/protocol/TBinaryProtocol.h>
#include <thrift/server/TSimpleServer.h>
#include <thrift/transport/TServerSocket.h>
#include <thrift/transport/TBufferTransports.h>

using namespace ::apache::thrift;
using namespace ::apache::thrift::protocol;
using namespace ::apache::thrift::transport;
using namespace ::apache::thrift::server;

using boost::shared_ptr;

class ServHandler : virtual public ServIf {
 public:
  ServHandler() {
    // Your initialization goes here
  }

  void put(const Student& s) {
    // Your implementation goes here
    printf("put\n");
    printf("sno=%d sname=%s ssex=%d sage=%d\n", s.sno, s.sname.c_str(), s.ssex, s.sage);
  }

  int32_t icall(const Student& s) {
    // Your implementation goes here
    printf("icall\n");
    printf("sno=%d sname=%s ssex=%d sage=%d\n", s.sno, s.sname.c_str(), s.ssex, s.sage);
    return s.sage;
  }

  void scall(std::string& _return, const Student& s) {
    // Your implementation goes here
    printf("scall\n");
    printf("sno=%d sname=%s ssex=%d sage=%d\n", s.sno, s.sname.c_str(), s.ssex, s.sage);
    _return = s.sname;
  }

  void stcall(Student& stu, const Student& s) {
    // Your implementation goes here
    printf("stcall\n");
    printf("sno=%d sname=%s ssex=%d sage=%d\n", s.sno, s.sname.c_str(), s.ssex, s.sage);
    stu.sno     = s.sno + 1;
    stu.sname   = s.sname + "123";
    stu.ssex    = s.ssex;
    stu.sage    = s.sage + 10;
  }

};

int main(int argc, char **argv) {
  int port = 9090;
  shared_ptr<ServHandler> handler(new ServHandler());
  shared_ptr<TProcessor> processor(new ServProcessor(handler));
  shared_ptr<TServerTransport> serverTransport(new TServerSocket(port));
  shared_ptr<TTransportFactory> transportFactory(new TBufferedTransportFactory());
  shared_ptr<TProtocolFactory> protocolFactory(new TBinaryProtocolFactory());

  TSimpleServer server(processor, serverTransport, transportFactory, protocolFactory);
  server.serve();
  return 0;
}
