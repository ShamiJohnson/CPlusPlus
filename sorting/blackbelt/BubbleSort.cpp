/*Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
 *
 * Ehtsham Nisar
 
 BubbleSort.cpp implements BubbleSort class
 */

#include "BubbleSort.h"

#include <iostream>     
using namespace std;

//constructor
BubbleSort::BubbleSort(int data[], int length): Sort(data, length){

}

//destructor
BubbleSort::~BubbleSort(){

}

/*
method sort
sort array by bubble sort
*/
void BubbleSort::sort(){

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
void BubbleSort::printArray(){
	cout << "BubbleSort Sort: ";
	Sort::printArray();
}

