
/*
 Sort.cpp implements Sort class
 */


#include "Sort.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/*
constructor
*/
Sort::Sort(int data[], int length){
	this->length = length;
	//copy array
	this->data = new int[length];

	for (int i = 0; i < length; i++)
	{
		this->data[i] = data[i];
	}
}

/*
desctructor
*/
Sort::~Sort(){
	delete [] data;
}

/*
method printArray
display array with length
*/
void Sort::printArray(){
	//iterate the array and print elements
	for (int i = 0; i < length; i++)
	{
		if (i > 0)
		{
			cout << ", ";
		}
		cout << data[i]; 
	}
	cout << endl;
}
