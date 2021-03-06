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
    if (isValidPositionToInsert(list, position) == false){
        printf("\n\nInvalid position djow");
        return 0;
    }

    
    struct node *newNode = (struct node *) malloc(sizeof(struct node));
    newNode->key = value;
    
    if (position == 0) {
        
        if (list->size == 0)
            newNode.nextNode = NULL;
        else
            newNode.nextNode = list->firstNode;
        
        list->firstNode = newNode;
        list->size++;
        
        return 1;
    }
    
    struct node *nextPositionNode = list->firstNode;
    
    for (int i=0; i < position -1; i++) {
        nextPositionNode = nextPositionNode->nextNode;
    }
    
    newNode->nextNode = nextPositionNode->nextNode;
    nextPositionNode->nextNode = newNode;

    list->size++;
    
    return 1;
}

int delete(int position, linkedList *list)
{
    struct node *n1 = list->firstNode;
    struct node *n2 = list->firstNode;
    
    if (isValidPositionToDelete(list, position) == false) {
        printf("\n\nInvalid Position\n\n");
        return 0;
    }
    
    if (position == 0) {
        if (n1->nextNode != NULL) {
            n1 = n1->nextNode;
            list->firstNode = n1;
            list->size--;
        } else {
            list->firstNode = NULL;
            list->size--;
        }
    }
    
    if (position > 0) {
        for(int i = 1; i < position; i++) {
            n1 = n1->nextNode;
        }
        
        for(int i = 1; i < position + 1; i++) {
            n2 = n1->nextNode;
        }
        
        n1->nextNode = n1;
        list->size--;
    }

    return 1;
}

int get(int position, linkedList *list)
{
    if (list->size > 0 && position > 0 && position <= list->size) {
        
        struct node *n = list->firstNode;
        
        for (int i=0; i < position -1; i++) {
            n = n->nextNode;
        }
        
        return &(n->key);

    } else {
        
        printf("The list is empty or you've provided an invalid position");
    }
    
    return 0;
}

int set(int value, int position, linkedList *list)
{
    struct node *n = list->firstNode;
    
    if (list->size > 0 && position > 0 && position <= list->size) {
        
        for (int i=0; i < position -1; i++) {
            n = n->nextNode;
        }
        
        n->key = value;
        
    } else {
        printf("The list is empty or you've provided an invalid position");
    }
}

void print(linkedList *list)
{
    struct node *n = list->firstNode;
    
    for (int i=0; i < list->size; i++) {
        printf("\n%d", n->key);
        n = n->nextNode;
    }
}

bool isValidPositionToInsert(linkedList *list, int position)
{
    if (position <= list->size && position >=0) {
        return true;
    }
    
    return false;
}

bool isValidPositionToDelete(linkedList *list, int position)
{
    if (position > 0 && list->size > 0) {
        return true;
    }
    
    return false;
}