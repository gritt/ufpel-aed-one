#include "binaryTree.h"

struct tree * initializeTree()
{
    struct tree *thisTree =  malloc(sizeof(struct tree));
    
    thisTree->size = 0;
    thisTree->rootNode = 0;
    
    return thisTree;
}


int insertInTree(struct tree *thisTree, int valueToInsert)
{
    //insert in first node;
    if (thisTree->size == 0) {

        struct node *thisNode = malloc(sizeof(struct node));
        
        thisNode->value = valueToInsert;

        thisTree->size++;
        thisTree->rootNode = thisNode;
        
        return 1;

    } else {
    
        struct node *rootNode = malloc(sizeof(struct node));
        rootNode = thisTree->rootNode;
        
        //right
        if (valueToInsert > thisTree->rootNode->value) {
            thisTree->rootNode->right = insertInTree(rootNode->right, valueToInsert);
        }
        
        //left
        if (valueToInsert < thisTree->rootNode->value) {
            thisTree->rootNode->left = insertInTree(rootNode->left, valueToInsert);
        }
    }
    
//    int key;
//    struct node *father;
//    struct node *leftNode;
//    struct node *rightNode;
    
}

