/*Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
 *
 * Ehtsham Nisar
 
 InsertionSort.cpp implements InsertionSort class
 */

#include "InsertionSort.h"

#include <iostream>
using namespace std;

//constructor
InsertionSort::InsertionSort(int data[], int length): Sort(data, length){
    
}

//destructor
InsertionSort::~InsertionSort(){
    
}

/*
 method sort
 sort array by insertion sort
 */
void InsertionSort::sort(){
    
    //iterate from the second element
    for (int i = 1; i < length; i++) {
        
        // inserted item
        int insert = data[i];
        
        int j = i;
        
        // loop, change data and find the appropriate to insert
        while ((j > 0) && (insert > data[j - 1])) {
            // [j] <- [j-1]
            data[j] = data[j - 1];
            j--;
        }
        
        // insert at j position
        data[j] = insert;
    }
}

/*
 method printArray
 display array with length
 */
void InsertionSort::printArray(){
    cout << "Insertion Sort: ";
    Sort::printArray();
}

