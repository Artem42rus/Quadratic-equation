CC=g++

CFLAGS=-c -Wall

all: QE

QE: q_e.o function.o
	$(CC) q_e.o function.o -o qe

q_e.o: q_e.cpp
	$(CC) $(CFLAGS) q_e.cpp

function: function.cpp
	$(CC) $(CFLAGS) function.cpp

clean:
	rm -rf *.o hello
