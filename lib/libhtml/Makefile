all: example

example: example.cpp html.o

html.o: html.cpp
	g++ html.cpp -c

clean: example html.o
	${RM} example html.o
