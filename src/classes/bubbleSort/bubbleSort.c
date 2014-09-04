#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, iterator, rowValue, *arrayToBeSort;
    
    //first line - how many rows have to read
    scanf("%d", &rows);
    
    
    //allocate space for all inputs
    if ((arrayToBeSort = malloc(rows * sizeof(int))) == NULL) {
        printf("Impossible to allocate space");
        exit(0);
    }
    
    arrayToBeSort = malloc(rows * sizeof(int));
    
    
    //store all in vector
    for (iterator=0; iterator<rows; iterator++) {
        
        scanf("%d", &rowValue);
        
        arrayToBeSort[iterator] = rowValue;
        
        printf("%d\n", rowValue);
    }
    
    return 0;
}


//int bubbleSort()
//{
//    int i, temp,
//    
//    bool isChanged = false;
//    
//    do {
// 
//        for (i=1; n - 1; i++) {
//            
//            
//            if (v[i] > v[i+1]) {
//                temp = v[i];
//                v[i] = v[i+1];
//                v[i+1] = temp;
//                isChanged = true;
//            }
//            
//        }
//        
//        
//    } while (isChanged == false);
    
/*
 *
 inicio
    repita
        trocou ← falso paraide1at ́en-1 hacer
        se v[i] > v[i+1] ent ̃ao temp ← v[i]
            v[i] ← v[i+1]
            ￼￼￼￼v[i+1] ← temp trocou ← verdadeiro
        ￼￼ate nao trocou
 */
    
//    return 0;
//}
