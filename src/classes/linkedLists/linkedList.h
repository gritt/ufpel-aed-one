//
//  linkedList.h
//  
//
//  Created by Gilvan Ritter on 10/28/14.
//
//

#ifndef ____linkedList__
#define ____linkedList__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node;
{
    int key;
    struct node *nextNode;

};

typedef struct linkedListStruct
{
    int size;
    struct node *firstNode;
    
} linkedList;


void initializeList(linkedList *list);

int insert(int value, int position, linkedList *list);

int set(int value, int position, linkedList *list);

int get(int position, linkedList *list);

int delete(int position, linkedList *list);

void print(linkedList *list);


/* 
 * Auxiliar functions
 */
bool isValidPositionToInsert(linkedList *list, int position);
bool isValidPositionToDelete(linkedList *list, int position);

#endif /* defined(____linkedList__) */
