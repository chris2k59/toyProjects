
#ifndef _trees_h
#define _trees_h


typedef struct TreeNode{
    int item;
    bool LTAG;
    bool RTAG;
    TreeNode *left;
    TreeNode *right;
} Node;

int countNodes(Node *root);

#endif
