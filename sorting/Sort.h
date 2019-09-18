/*Honor Pledge: I pledge that I have neither given, nor received any help on this assignment.
 *
 * Ehtsham Nisar

 Sort.h defines Sort pure virtual class
 */

#ifndef SORT_H
#define SORT_H

class Sort
{
    
public:
    /*
     constructor
     */
    Sort(int data[], int length);
    
    /*
     desctructor
     */
    virtual ~Sort();
    
    /*
     method sort
     this method must be implemented by derived class
     */
    virtual void sort() = 0;
    
    /*
     method printArray
     display array with length
     */
    virtual void printArray();
    
protected:
    
    int* data; //data to sort
    int length; // number of elements in array
};

#endif


