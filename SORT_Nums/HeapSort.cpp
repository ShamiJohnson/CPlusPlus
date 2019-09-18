/*
 HeapSort.cpp implements HeapSort class
 */

#include "HeapSort.h"

#include <iostream>     
using namespace std;

//constructor
HeapSort::HeapSort(int data[], int length): Sort(data, length){

}

//destructor
HeapSort::~HeapSort(){

}

/*
method sort
sort array by Heap sort
*/
void HeapSort::sort(){

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
void HeapSort::printArray(){
	cout << "HeapSort Sort: ";
	Sort::printArray();
}

