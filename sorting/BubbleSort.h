/*Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
 *
 * Ehtsham Nisar
 
 BubbleSort.h defines Bubble Sort that implements virtual sort method
 */

#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include "Sort.h"

class BubbleSort: public Sort
{
public:
    //constructor
    BubbleSort(int data[], int length);
    
    //destructor
    virtual ~BubbleSort();
    
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

