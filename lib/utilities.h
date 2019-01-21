void minMax(int *, int *, int **, int **);
void fillArray(int *, long);
void reverse(char *);

struct LinkedListNode {
    int data;
    struct LinkedListNode *next;
};
struct LinkedListNode* createNode(int);
void addToNode(struct LinkedListNode *, struct LinkedListNode *);
void printList(struct LinkedListNode *);
void freeList(struct LinkedListNode *);

struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};
struct TreeNode *createTreeNode(int);
void printTreeInOrder(struct TreeNode *);
void printTreeBreathFirst(struct TreeNode *);