/*
 * Ehtsham Nisar
 */

/**
 * CSCI 36200: Data Structures
 * Programming Assignment 3
 * Instructor: Dr. Snehasis Mukhopadhyay
 * Due date: April 19, 2018
 *
 * Description:
 * The program compares different sorting algorithms
 * by using merge sort, quick sort, insert sort, heap sort
 
 * Input:
 *   from a file called n.txt who's numbers were randomly generated
 *
 * Output:
 *   sorted numbers
 
 define Driver class
 */



#include <string>       
#include <iostream>     
#include <sstream>     
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "Driver.h"
#include "InsertionSort.h"
#include "QuickSort.h"
#include "HeapSort.h"
#include "MergeSort.h"

using namespace std;

#define DATA_FILE_NAME "n.txt" //data file name
#define ARRAY_SIZE 20000 //maximum of elements in array

/*
default constructor
*/
Driver::Driver(){
	length = 0;
}

/*
method readInt
read an integer from standard input
*/
int Driver::readInt(string prompt){

	string line; //a line from user
	stringstream ss; //for converting from string to int
	int number; //an integer

	//prompt for an integer
	cout << prompt;
	getline(cin, line); //read a line
	
	//convert string to int
	ss << line;
	ss >> number;

	return number;
}


/*
method mainMenu
display the main menu and read user selection
*/
int Driver::mainMenu(){

	cout << "1. Load Data (From File)" << endl;
	cout << "2. Exit Program" << endl;

	//read user selection
	return readInt("Please enter your selection: ");
}

/*
method sortMenu
display the menu for sorting and read user selection
*/
int Driver::sortMenu(){

	cout << "1. Insertion Sort" << endl;
	cout << "2. Merge Sort" << endl;
    cout << "3. Heap Sort" << endl;
	cout << "4. Quick Sort" << endl;
	cout << "5. Random sort (Insertion Sort, Merge Sort, Heap Sort or Quick Sort)" << endl;
	cout << "6. Exit Program" << endl;

	//read user selection
	return readInt("Please enter your selection: ");
}

/*
method loadArray
load integers from file into array
*/
int Driver::loadArray(){

	ifstream inFile; //input file stream
	string line; //a line from file	
	int number; //an integer
	string sNumber; //number in string format

	length = 0;

	//open file for reading
	inFile.open(DATA_FILE_NAME);

    if (!inFile) {
        cout << "Unable to open file " << DATA_FILE_NAME << endl;
    }else{
		while (inFile >> line)
		{
			stringstream ss; //for parse string to integers
			ss << line;

			//parse ss by ','
			while (getline(ss, sNumber, ','))
			{
				//convert string to an integer
				stringstream ssNumber; 
				ssNumber << sNumber;
				ssNumber >> number;

				//put in string
				data[length] = number;
				length++;
			}
		}
	}

	return length;
}

/*
method printArray
display array with length
*/
void Driver::printArray(){

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

/*
method run
run the program
*/
void Driver::run(){

	int sortSelection = 0; //sort selection
	Sort* sortAlg = NULL;//sort algorithm

	srand(time(0));//initialize generator

	//display menu and get user selection
	int selection = mainMenu();
	cout << endl;

	//loop until user choose 2 to exit
	while (selection != 2)
	{
		switch (selection)
		{
		case 1:
			//read integers from file
			length = loadArray();

			//print unsorted array
			cout << "Unsorted Array: ";
			printArray();
			cout << endl;

			//display menu and get user selection
			sortSelection = sortMenu();			

			//read until user choose valid option
			while (sortSelection != 1 && sortSelection != 2 && sortSelection != 3
				 && sortSelection != 4 && sortSelection != 5 && sortSelection != 6)
			{
				cout << endl << "Invalid selection" << endl << endl;

				//display menu and get user selection
				sortSelection = sortMenu();				
			}

			if (sortSelection == 5)//random
			{
				sortSelection = rand() % 4 + 1;//1 or 2 or 3 or 4
			}

			if (sortSelection == 1)
			{//Insertion Sort
				cout << endl;
				sortAlg = new InsertionSort(data, length);
				sortAlg->sort();
				sortAlg->printArray();
				delete sortAlg;

			}else if (sortSelection == 2)
            
            {//2. Merge Sort
                cout << endl;
                sortAlg = new MergeSort(data, length);
                sortAlg->sort();
                sortAlg->printArray();
                delete sortAlg;
            }else if (sortSelection == 3)
            
			{//3. Heap Sort
				cout << endl;
				sortAlg = new HeapSort(data, length);
				sortAlg->sort();
				sortAlg->printArray();
				delete sortAlg;
			}else if (sortSelection == 4)
            
			{//4. Quick sort
				cout << endl;
				sortAlg = new QuickSort(data, length);
				sortAlg->sort();
				sortAlg->printArray();
				delete sortAlg;
			}else if (sortSelection == 6)
			{//5. Exit program
				cout << endl;
			}

			break;
		default:
			cout << "Invalid selection" << endl;
			break;
		}

		//user exit in sub menu
		if (sortSelection == 6)
		{
			break;
		}

		cout << endl;

		//display menu and get user selection
		selection = mainMenu();
		cout << endl;

	}//end while

	//goodbye
	cout << "Goodbye!" << endl;
}
/*
main function to start C++ application
*/
int main(){

	Driver driver; //create Driver object

	driver.run();

	return 0;
}
