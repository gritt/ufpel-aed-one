#ifndef ____binaryTree__
#define ____binaryTree__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct treeDescriptor {
    int size;
    int *rootNode;
}

struct node {
    int key;
    int *father;
    int *leftNode;
    int *rightNode;
}

#endif