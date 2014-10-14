#include <stdio.h>

#include "quickSort.h"
#include "array.h"

void quickSort(int *theArray, int pivot, int right) {
    
    int aux;
    
    //comment this out cause printing takes to much time
    //printTheArray(theArray, right);
    
    if (pivot < right) {
        
        aux = partition(theArray, pivot, right);
        
        quickSort(theArray, pivot, aux - 1);
        quickSort(theArray, aux + 1, right);
    }
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