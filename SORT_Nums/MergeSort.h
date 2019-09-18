/* 
MergeSort.h defines Merge Sort that implements virtual sort method
 */
#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include "Sort.h"

class MergeSort: public Sort
{
public:
	//constructor
	MergeSort(int data[], int length);

	//destructor
	virtual ~MergeSort();

	/*
	method sort
	sort array by Merge sort
	*/
	virtual void sort();

	/*
	method printArray
	display array with length
	*/
	virtual void printArray();
};

#endif
