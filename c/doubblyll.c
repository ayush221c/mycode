#include<stdio.h>
#include<stdlib.h>
 typedef struct n {
    int  data;              
    struct n *next;
    struct n *prev;
}node;
void display(node*head){
    node *cur=head;
    while (cur!=NULL){
        printf("%d\n",cur->data);
        cur=cur->next;
    }   
}
int main (){

//shortning the node declaration by using typedef function 
node *node1= (node*)malloc(sizeof(node));
node *node2= (node*)malloc(sizeof(node));
node *node3=(node*)malloc(sizeof(node));


    node1->data=2;
    node1->next=node2;
    node1->prev=NULL;


     node2->data=8;
    node2->next=node3;
    node2->prev=node1;

     node3->data=10;
    node3->next=NULL;
    node3->prev=node2;

    display(node1);
}