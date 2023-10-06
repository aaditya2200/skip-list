CC = g++
CXXFLAGS = -std=c++11

all: main

main: main.o
	$(CC) $(CXXFLAGS) main.o -o main

main.o: main.cpp
	$(CC) $(CXXFLAGS) -c main.cpp

clean:
	rm -f *.o main

