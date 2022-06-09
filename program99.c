  #include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

typedef struct node NODE;         //struct node
typedef struct node * PNODE;      //struct node *
typedef struct node ** PPNODE;     //struct node *

int main()
{ 
    //Static memory allocation
    NODE obj;

    //Dynamic memory allocation
    PNODE ptr = (PNODE)malloc(sizeof(NODE));

    obj.data =11;       //Direct acessing operator
    obj.next = NULL;

    ptr -> data =11;   //Indircr acessing operator
    ptr -> next = NULL;

    return 0;
}