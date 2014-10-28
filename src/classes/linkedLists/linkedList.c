//
//  linkedList.c
//  
//
//  Created by Gilvan Ritter on 10/28/14.
//
//

#include "linkedList.h"

void initializeList(linkedList *list)
{
    list->firstNode = NULL;
    list->size = 0;
    
    printf("\n\nDynamic List build successfully! \n\n");
}

int insert(int value, int position, linkedList *list)
{
    if (isValidPosition(list, position) == false){
        printf("\n\nInvalid position djow");
        return 0;
    }

    
    node *newNode = (node *) malloc(sizeof(node));
    newNode->key = value;
    
    if (position == 0) {
        
        if (list->size == 0)
            newNode->nextNode = NULL;
        else
            newNode->nextNode = list->firstNode;
        
        list->firstNode = newNode;
        list->size++;
        
        return 1;
    }
    
    node *nextPositionNode = list->firstNode;
    
    for (int i=0; i < position -1; i++) {
        nextPositionNode = nextPositionNode->nextNode;
    }
    
    newNode->nextNode = nextPositionNode->nextNode;
    nextPositionNode->nextNode = newNode;

    list->size++;
    
    return 1;
}

int delete(int position, linkedList *list);
{
}

bool isValidPosition(linkedList *list, int position)
{
    if (position <= list->size && position >=0) {
        return true;
    }
    
    return false;
}