#Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
#Ehtsham Nisar
CC = g++
LIBS = -g -Wall

sort: Sort.o QuickSort.o InsertionSort.o HeapSort.o MergeSort.o Driver.o
	$(CC) $(LIBS) -o sort Sort.o QuickSort.o InsertionSort.o HeapSort.o MergeSort.o Driver.o

Driver.o: Driver.h  Driver.cpp
	$(CC) $(LIBS) -c Driver.cpp

Sort.o: Sort.h  Sort.cpp
	$(CC) $(LIBS) -c Sort.cpp

QuickSort.o: QuickSort.h  QuickSort.cpp
	$(CC) $(LIBS) -c QuickSort.cpp

InsertionSort.o: InsertionSort.h  InsertionSort.cpp
	$(CC) $(LIBS) -c InsertionSort.cpp

HeapSort.o: HeapSort.h  HeapSort.cpp
	$(CC) $(LIBS) -c HeapSort.cpp

MergeSort.o: MergeSort.h  MergeSort.cpp
	$(CC) $(LIBS) -c MergeSort.cpp

all: program1 clean

clean:
	rm -f *.o
