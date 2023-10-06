CC = g++
CXXFLAGS = -g -std=c++11

all: main

main: main.o node.o
	$(CC) $(CXXFLAGS) main.o node.o -o main

main.o: main.cpp node.hpp
	$(CC) $(CXXFLAGS) -c main.cpp

node.o: node.cpp node.hpp
	$(CC) $(CXXFLAGS) -c node.cpp

clean:
	rm -f *.o main

