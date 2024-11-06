// creating a linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
int linkedlisttraversal(struct node* ptr)
{
    while (ptr !=NULL)
    {
        printf(" Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//inseting an element at the beggining of the linked list 
struct node* insertatfirst(struct node* head,int data){
    struct node* ptr =(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
    }

     
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memory for nodes in the linked list
    // dynamic memory allocation
    head = (struct node *)malloc(sizeof(struct node));   // size of struct node
    second = (struct node *)malloc(sizeof(struct node)); // size of struct node
    third = (struct node *)malloc(sizeof(struct node));  // size of struct node
    fourth = (struct node *)malloc(sizeof(struct node));  // size of struct node

    // linking first and second node
    head->data = 40;
    head->next = second;

    // linking second  and third  node
    second->data = 100;
    second->next = third;

    // linking third  and fourth  node
    third->data = 800;
    third->next = fourth;

    // terminate the list at the fourth node
    fourth->data = 455;
    fourth->next = NULL;

    linkedlisttraversal(head);
   head= insertatfirst(head,668899);
   linkedlisttraversal(head);
        return 0;
}