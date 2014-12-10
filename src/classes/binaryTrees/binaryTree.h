#ifndef ____binaryTree__
#define ____binaryTree__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct node {
    int value;
    struct node *left;
    struct node *right;
};

struct tree {
    int size;
    struct node *rootNode;
};


struct tree * initializeTree();
int insertInTree(struct tree *thisTree, int valueToInsert);

#endif