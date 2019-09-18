#include "QuickSort.h"

/*
QuickSort.cpp implements QuickSort class
*/

#include "InsertionSort.h"

#include <iostream>     
using namespace std;

//constructor
QuickSort::QuickSort(int data[], int length): Sort(data, length){

}

//destructor
QuickSort::~QuickSort(){

}

/*
method sort
sort array by insertion sort
*/
void QuickSort::sort(){
	quickSort(0, length - 1);
}

/*
method printArray
display array with length
*/
void QuickSort::printArray(){

	cout << "Quick Sort: ";
	Sort::printArray();
}

/*
quick sort helper method
start and end are valid indices
*/
void QuickSort::quickSort(int start, int end) {

	if (start < end) {
		// split the table into two parts
		int pivot = partition(start, end);

		// sort the left part and right part
		quickSort(start, pivot - 1);
		quickSort(pivot + 1, end);
	}
}
	
/*
method: partition
partitions the array into two parts
where left part is smaller than pivot
right part is larger than pivot
*/
int QuickSort::partition(int start, int end) {

	// choose pivot
	int pivot = data[start];

	// split index
	int index = start;

	// loop in range [start + 1: end]
	for (int i = start + 1; i <= end; i++) {

		// swap and increase split
		if (pivot < data[i]) {

			// increase split
			index = index + 1;

			// swap
			int temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}
	}//end for

	// swap, pivot is the number between the two parts
	int temp = data[start];
	data[start] = data[index];
	data[index] = temp;

	return index;
}

