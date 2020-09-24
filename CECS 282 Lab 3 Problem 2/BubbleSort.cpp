#include "BubbleSort.h";
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

// Reads data from a text file into an array
int readData(int*& arr) {

	// Creates a variable to save the size of the array
	int size;

	// Create inputFile object to open the file
	ifstream inputFile;

	// Open the file to get the data
	inputFile.open("data.txt");

	// The first line of the file is the size of the array
	inputFile >> size;

	// Allocate the memory for pointer arr
	arr = new int[size];

	// Read the rest of the data into the array
	for (int i = 0; i < size; i++) {

		// Read the current num in the txt file and add it into the array
		inputFile >> *(arr + i);

	}

	// Close the opened file 
	inputFile.close();

	// Return the size of the array
	return size;

}

// Bubble Sort Algorithm
void bubbleSort(int* array, int size, bool (*sort)(int, int)) {

	// Boolean value checking if the adjacent elements swapped
	bool swapped = true;

	// Create counter j
	int j = 0;

	// Create a temp variable
	int temp;

	// While true
	while (swapped) {

		swapped = false;

		j++;

		// Iterate until all elements have been swapped
		for (int i = 0; i < size - j; i++) {

			// Store the current checked elements into x and y
			int x = *(array + i);
			int y = *(array + (i + 1));

			// Call the function the pointer is pointing to, and determine if the elements need to be swapped
			swapped = sort(x, y);
			
			// If the 2 elements need to be swapped, swap them
			if (swapped) {

				// Swap the elements 
				temp = *(array + i);
				*(array + i) = *(array + (i + 1));
				*(array + (i + 1)) = temp;
				swapped = true;

			}

		}

	}

}

// Prints the output to the console
void writeToConsole(int* arr, int last) {

	// For each element in the array, ouput it 
	for (int i = 0; i < last; i++) {
		cout << *(arr + i) << " ";
	}

}

bool sortAscending(int x, int y) {

	// Check if the current element is GREATER than the adjacent elment
	if (x > y) {

		return true;

	} else {

		return false;

	}

	

}

bool sortDescending(int x, int y) {

	// Check if the current element is LESS than the adjacent elment
	if ( x < y ) {

		return true;

	} else {

		return false;

	}

}