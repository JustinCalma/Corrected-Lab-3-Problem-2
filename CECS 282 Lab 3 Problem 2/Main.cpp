// Team 1 - Justin Calma & Ann Luong
// CECS282 Lab 3.2

#include "BubbleSort.h"
#include <iostream>
using namespace std;

int main() {

	// Create a BubbleSort object
	//BubbleSort bubble;

	// Create the pointer
	int* arr;

	int x, y;

	// Call readData function and find the total number of elements
	int size = readData(arr);

	// Sort the array in ASCENDING order using Bubble Sort Algorithm  int* array, int size, void (*sort)(int x , int y)
	bubbleSort(arr, size, sortAscending);

	// Output the result to the console
	writeToConsole(arr, size);

	cout << "\n";

	// Sort the array in DESCENDING order using Bubble Sort Algorithm
	bubbleSort(arr, size, sortDescending);

	// Output the result to the console
	writeToConsole(arr, size);

	// Return 0 for main
	return 0;

}