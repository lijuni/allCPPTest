Myserver : qiandao.o main_with_socket.o
	g++ -std=c++11 -o Myserver qiandao.o main_with_socket.o
	@echo "编译完成"

qiandao.o : qiandao.h 
	g++ -std=c++11 -c qiandao.h qiandao.cpp

main_with_socket.o : 
	g++ -std=c++11 -c main_with_socket.cpp


.PHONY:clean

clean:
	rm -rf *.o Myserver
