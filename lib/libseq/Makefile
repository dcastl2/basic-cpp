all: example

example: example.cpp seq.o

seq.o: seq.cpp
	g++ seq.cpp -c

clean: example seq.o
	${RM} example seq.o
