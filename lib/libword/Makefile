all: example

example: example.cpp word.o

word.o: word.cpp
	g++ word.cpp -c

clean: example word.o
	${RM} example word.o
