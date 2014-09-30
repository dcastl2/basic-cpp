SRCS=$(wildcard *.cpp)
EXES=$(SRCS:.cpp=)

all: $(EXES)

% : %.cpp
	g++ -o $@ $^

clean:  $(EXES)
	$(RM) $^
