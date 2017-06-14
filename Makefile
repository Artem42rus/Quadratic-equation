CC=g++

CFLAGS=-c -Wall

all: QE

QE: main.o function.o
	$(CC) main.o function.o -o main
q_e.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

function: function.cpp
	$(CC) $(CFLAGS) function.cpp

clean:
	rm -rf *.o main
