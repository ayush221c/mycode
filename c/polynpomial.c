#include<stdio.h>

struct node{
    int cofficient;
    int exponent ;
    struct node* next;
    struct node* prev;
};
struct node createnode(int exp ,int coff){
    struct node* newnode =(struct node*)malloc(sizeof(struct node));
    newnode->cofficient=coff;
    newnode->exponent=exp;
    newnode->next=NULL;
    newnode->prev=NULL;
}
