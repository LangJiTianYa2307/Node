#include<stdlib.h>
#include<stdio.h>
#include "sll_node.h"

#define FALSE 1
#define TRUE 0

int main(){
    return 0;
}

//往单链表中插入一个元素
int sll_insert(Node **root,int value){
    Node *previous;
    Node *current;
    Node *new;
    previous = NULL;
    current = *root;
    //寻找合适的节点插入位置
    while(current != NULL && current->value < value){
        previous = current;
        current = current->link;
    }

    //分配内存
    new = (Node *)malloc(sizeof(Node));
    if(new == NULL)
        return FALSE;
    new->value =  value;
    //分配的节点指向当前节点
    new->link = current;
    //判断是否头节点为空，如果为空，直接赋值
    if(previous == NULL)
        *root = new;
    else
    {
        //将前面一个节点的指针指向新建的节点
        previous->link = new;
    }
}