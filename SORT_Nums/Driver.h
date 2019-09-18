/*
 define Driver class
 */

#ifndef DRIVER_H
#define DRIVER_H

#include <string>       
#include <iostream>     
#include <sstream>     
#include <fstream>
using namespace std;

#define DATA_FILE_NAME "n.txt" //data file name
#define ARRAY_SIZE 20000 //maximum of elements in array

class Driver{
public:

	/*
	default constructor
	*/
	Driver();

	/*
	method readInt
	read an integer from standard input
	*/
	int readInt(string prompt);

	/*
	method mainMenu
	display the main menu and read user selection
	*/
	int mainMenu();

	/*
	method sortMenu
	display the menu for sorting and read user selection
	*/
	int sortMenu();

	/*
	method loadArray
	load integers from file into array
	*/
	int loadArray();

	/*
	method printArray
	display array with length
	*/
	void printArray();

	/*
	method run
	run the program
	*/
	void run();

private:
	int data[ARRAY_SIZE]; //data to sort
	int length; // number of elements in array
};

#endif
