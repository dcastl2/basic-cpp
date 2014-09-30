SRCS := $(filter-out typeout.cpp, $(wildcard *.cpp))
OBJS := $(SRCS:.cpp=)

all: $(OBJS)

%: %.cpp typeout.o
	g++ -o $@ $@.cpp typeout.o

typeout.o: typeout.cpp
	g++ typeout.cpp -c

clean: $(OBJS)
	$(RM) $^
