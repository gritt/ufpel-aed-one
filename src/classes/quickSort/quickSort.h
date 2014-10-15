#ifndef QUICKSORT_H_
#define QUICKSORT_H_

#define BASE_CASE 100

void quickSort(int *theArray, int pivot, int right);

void quickSortWithInsertionSort(int *theArray, int pivot, int right);

int partition(int *theArray, int l, int r);

#endif