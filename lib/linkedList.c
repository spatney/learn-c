#include "utilities.h"

#include <stdio.h>
#include <stdlib.h>

struct LinkedListNode* createNode(int data) {
    struct LinkedListNode *node = malloc(sizeof(struct LinkedListNode));
    node->data = data;
    node->next = NULL;
    return node;
}

void addToNode(struct LinkedListNode *srcNode, struct LinkedListNode *linkNode) {
    srcNode->next = linkNode;
}

void printList(struct LinkedListNode *head) {
    struct LinkedListNode *node = head;

    printf("Head -> ");
    while(node) {
        printf("%d -> ", node->data);
        node = node->next;
    }

    printf("NULL\n");
}

void freeList(struct LinkedListNode *head) {
    while(head) {
        struct LinkedListNode *toFree = head;
        head = head->next;
        free(toFree);
    }
}