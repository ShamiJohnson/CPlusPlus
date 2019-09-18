/*
 MergeSort.cpp implements MergeSort class
 */

#include "MergeSort.h"

#include <iostream>     
using namespace std;

//constructor
MergeSort::MergeSort(int data[], int length): Sort(data, length){

}

//destructor
MergeSort::~MergeSort(){

}

/*
method sort
sort array by Merge sort
*/
void MergeSort::sort(){

	//outer loop
	for (int i = 0; i < (length - 1); i++) {
		//inner loop, compare and swap
		for (int j = 0; j < length - i - 1; j++) {
			if (data[j] < data[j + 1]) {
				int swap = data[j];
				data[j] = data[j + 1];
				data[j + 1] = swap;
			} //end if

		}// end inner for
	}// end outer for
}

/*
method printArray
display array with length
*/
void MergeSort::printArray(){
	cout << "MergeSort Sort: ";
	Sort::printArray();
}

