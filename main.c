#include "lib/utilities.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <sys/resource.h>

void treeExample() {
    struct TreeNode *root = createTreeNode(10);
    root->left = createTreeNode(4);
    root->right = createTreeNode(16);
    root->left->left = createTreeNode(2);
    root->left->right = createTreeNode(5);
    root->right->left = createTreeNode(13);
    root->right->right = createTreeNode(20);

    printTreeInOrder(root);
    printf("END\n");
    printTreeBreathFirst(root);
    printf("END\n");
}

void printMemUsage()
{
    struct rusage r_usage;
    getrusage(RUSAGE_SELF, &r_usage);
    printf("Memory usage: %ld kilobytes\n", r_usage.ru_maxrss);
}

void linkedListExample()
{
    struct LinkedListNode *head = createNode(0);
    struct LinkedListNode *prevNode = head;

    for (int i = 1; i < 10; i++)
    {
        struct LinkedListNode *newNode = createNode(i);
        addToNode(prevNode, newNode);
        prevNode = newNode;
    }

    printList(head);
    freeList(head);
}

void reverseStrExample()
{
    char *str = malloc(11 * sizeof(char));
    strcpy(str, "Hello World!");

    reverse(str);

    printf("%s\n", str);
}

void minMaxExample()
{
    long size = 100;
    int *numbers = (int *)malloc(size * sizeof(int));

    fillArray(numbers, size);

    int *smallest = 0, *largest = 0;

    minMax(numbers, numbers + size, &smallest, &largest);

    if (largest && smallest)
    {
        printf("largest = %d\nsmallest = %d\n", *largest, *smallest);
    }
    else
    {
        printf("Possibly an empty array.\n");
    }

    free(numbers);
    numbers = 0;
}

int main(int argc, char const *argv[])
{
    clock_t start, end;
    start = clock();

    treeExample();

    end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\nmain() took %f seconds to execute \n", cpu_time_used);
    return 0;
}