#include<stdio.h>
#include<stdlib.h>
 typedef struct n{
    int data;
    struct n* next;
}node;

    void display(node* head){
        node* cur=head;
        while(cur->next!=head){
            printf("%d\n",cur->data);
            cur=cur->next;
        }
        printf("%d\n",cur->data);// this is to print the last element who is again pointing to the head .
    }

    int main (){
        node *first =(node*)malloc(sizeof(node)); 
        node *second =(node*)malloc(sizeof(node)); 
        node *third =(node*)malloc(sizeof(node)); 
        node *fourth =(node*)malloc(sizeof(node)); 

        first->data=100;
        second->data=200;
        third->data=300;
        fourth->data=400;

        first->next=second;
        second->next=third;
        third->next=fourth;
        fourth->next=first;

display(first);

    }