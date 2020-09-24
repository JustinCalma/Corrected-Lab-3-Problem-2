#ifndef BUBBLESORT_H
#define BUBBLESORT_H

int readData(int*& arr);
void bubbleSort(int* array, int size, bool (*)(int, int));
void writeToConsole(int* arr, int last);
bool sortAscending(int, int);
bool sortDescending(int, int);

#endif