/*
 
 InsertionSort.h defines Insertion Sort that implements virtual sort method
 */
#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include "Sort.h"

class InsertionSort: public Sort
{
public:
	//constructor
	InsertionSort(int data[], int length);

	//destructor
	virtual ~InsertionSort();

	/*
	method sort
	sort array by insertion sort
	*/
	virtual void sort();

	/*
	method printArray
	display array with length
	*/
	virtual void printArray();
};

#endif
