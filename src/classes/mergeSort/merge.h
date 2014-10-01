#ifndef MERGE_H_
#define MERGE_H_

#define ARRAY_SIZE_LIMIT 10

void mergeSort(int *array, int *arrayCopy, int begin, int end);

void merge(int *array, int *arrayCopy, int begin, int middle, int end);

void copyArray(int *array, int *arrayCopy, int begin, int end);


void populateTheArray(int *array, int arraySize);
void printTheArray(int *array, int arraySize);

#endif