all: main

main: main.cpp algebra.o
	g++ main.cpp algebra.o -o main

algebra.o: algebra.cpp
	g++ algebra.cpp -c 

clean: algebra.o main
	$(RM) $^
