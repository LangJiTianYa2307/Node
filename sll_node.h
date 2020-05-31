#ifndef __SLL_NODE_H
#define __SLL_NODE_H

typedef struct _Node Node;

struct _Node
{
    Node *link;
    int value;
};

int sll_insert(Node **root,int value);

#endif