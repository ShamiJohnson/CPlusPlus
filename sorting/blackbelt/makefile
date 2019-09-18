#Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
#Ehtsham Nisar
CC = g++
LIBS = -g -Wall

assignment6: Sort.o QuickSort.o InsertionSort.o BubbleSort.o Driver.o
	$(CC) $(LIBS) -o assignment6 Sort.o QuickSort.o InsertionSort.o BubbleSort.o Driver.o

Driver.o: Driver.h  Driver.cpp
	$(CC) $(LIBS) -c Driver.cpp

Sort.o: Sort.h  Sort.cpp
	$(CC) $(LIBS) -c Sort.cpp

QuickSort.o: QuickSort.h  QuickSort.cpp
	$(CC) $(LIBS) -c QuickSort.cpp

InsertionSort.o: InsertionSort.h  InsertionSort.cpp
	$(CC) $(LIBS) -c InsertionSort.cpp

BubbleSort.o: BubbleSort.h  BubbleSort.cpp
	$(CC) $(LIBS) -c BubbleSort.cpp

all: program1 clean

clean:
	rm -f *.o