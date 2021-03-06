#include <stdio.h>

#include "quickSort.h"
#include "insertionSort.h"
#include "array.h"

void quickSort(int *theArray, int pivot, int right)
{
    int aux;
    
    //comment this out cause printing takes to much time
    //printTheArray(theArray, right);
    
    if (pivot < right) {
        
        aux = partition(theArray, pivot, right);
        
        quickSort(theArray, pivot, aux - 1);
        quickSort(theArray, aux + 1, right);
    }
}

void quickSortWithInsertionSort(int *theArray, int pivot, int right)
{
    int aux;
    
    pivot = choosePivotByMedianOfThree(theArray, pivot, right);
    
    //comment this out cause printing takes to much time
    //printTheArray(theArray, right);
    
    if (pivot < right && right > BASE_CASE) {
        
        aux = partition(theArray, pivot, right);
        
        quickSortWithInsertionSort(theArray, pivot, aux - 1);
        quickSortWithInsertionSort(theArray, aux + 1, right);

    } else if(right <= BASE_CASE) {
        
        //dont split again, use insertion sort instead
        insertionSort(theArray, right);
    }
        
}

int choosePivotByMedianOfThree(int *theArray, int right, int left)
{
    int middle = (right + left) / 2;
    
    if (theArray[left] > theArray[right]) {
        swapValuesPositions(theArray, theArray[left], theArray[right]);
    }

    if (theArray[middle] < theArray[left] ) {
        swapValuesPositions(theArray, theArray[middle], theArray[left]);
    }
    
    if (theArray[middle] > theArray[right]) {
        swapValuesPositions(theArray, theArray[middle], theArray[right]);
    }
    
    return middle;
}

void swapValuesPositions(int *theArray, int leftPosition, int rightPosition)
{
    int tmpPosition;
    
    tmpPosition = theArray[leftPosition];
    
    theArray[leftPosition] = theArray[rightPosition];
    
    theArray[rightPosition] = tmpPosition;
}

int partition(int *theArray, int l, int r)
{
    int pivot, i, j, t;
    
    pivot = theArray[l];
    
    i = l; j = r+1;
    
    while(1) {
        
        do ++i; while( theArray[i] <= pivot && i <= r );
        do --j; while( theArray[j] > pivot );
        
        if ( i >= j ){
            break;
        }
        
        t = theArray[i];
        theArray[i] = theArray[j];
        theArray[j] = t;
        
    }
    
    t = theArray[l];
    theArray[l] = theArray[j];
    theArray[j] = t;
    
    return j;
}