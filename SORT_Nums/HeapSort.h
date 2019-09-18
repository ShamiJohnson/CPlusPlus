/*
 HeapSort.h defines Heap Sort that implements virtual sort method
 */
#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include "Sort.h"

class HeapSort: public Sort
{
public:
	//constructor
	HeapSort(int data[], int length);

	//destructor
	virtual ~HeapSort();

	/*
	method sort
	sort array by heap sort
	*/
	virtual void sort();

	/*
	method printArray
	display array with length
	*/
	virtual void printArray();
};

#endif
