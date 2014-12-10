#ifndef ____binaryTree__
#define ____binaryTree__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node {
    int key;
    struct node *father;
    struct node *leftNode;
    struct node *rightNode;
};

typedef struct tree {
    int size;
    struct node *rootNode;
} Tree;


/*
 * binary tree functions
 */
Tree * initializeTree();

void insertInTree(Tree *thisTree);

#endif