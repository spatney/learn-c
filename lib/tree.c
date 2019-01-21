#include "utilities.h"

#include <stdlib.h>
#include <stdio.h>

struct TreeNode *createTreeNode(int data)
{
    struct TreeNode *node = malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = node->right = NULL;

    return node;
}

void printTreeBreathFirst(struct TreeNode *root) {
    struct TreeNode **nodeQueue = calloc(100, sizeof(struct TreeNode*));

    int tailMarker = 0;
    int headMarker = 0;
    nodeQueue[tailMarker++] = root;

    while(nodeQueue[headMarker]) {
        printf("%d -> ", nodeQueue[headMarker]->data);
        if(nodeQueue[headMarker]->left) {
            nodeQueue[tailMarker++] = nodeQueue[headMarker]->left;
        }
        if(nodeQueue[headMarker]->right) {
            nodeQueue[tailMarker++] = nodeQueue[headMarker]->right;
        }

        headMarker++;
    }

    free(nodeQueue);
}

void printTreeInOrder(struct TreeNode *root) {
    if(root) {
        printTreeInOrder(root->left);
        printf("%d -> ", root->data);
        printTreeInOrder(root->right);
    }
}