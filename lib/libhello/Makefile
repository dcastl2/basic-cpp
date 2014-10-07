all: hello

hello: hello-interpreter.cpp hello.o
	g++ hello-interpreter.cpp hello.o -o hello

hello.o: hello.cpp
	g++ hello.cpp -c

clean: hello hello.o
	${RM} hello hello.o
