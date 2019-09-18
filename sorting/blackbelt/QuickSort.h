/*Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
 *
 * Ehtsham Nisar

QuickSort.h defines Quick Sort that implements virtual sort method
*/
#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include "Sort.h"

class QuickSort: public Sort
{
public:
	//constructor
	QuickSort(int data[], int length);

	//destructor
	virtual ~QuickSort();

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
private:
	/*
	quick sort helper method
	start and end are valid indices
	*/
	void quickSort(int start, int end);
	
	/*
	method: partition
	partitions the array into two parts: smaller or greater/equal part
	*/
	int partition(int start, int end);
	
};

#endif
