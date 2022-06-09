//Singly Linear Linked list.
/*
  InsertFirst
  InsertLast
  InsertAtPosition

  DeleteFirst
  DeleteLast
  DeleteAtPosition
  
  Display
  Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;       //struct node
typedef struct node * PNODE;    //struct node *
typedef struct node ** PPNODE;  //struct node **

/*
  1:Allocate the memory
  2:Initialise the node
  3:Check wherther LL is empty or not
  4:If LL is empty new node is first node
  5:If LL contain atleast one node in it then store the address of privious first node in next pointer of new node
*/
void InsertFirst(PPNODE Head, int iNo)
{
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

  newn -> data = iNo;
  newn -> next = NULL;

  if(*Head == NULL)   //if LL is empty
  {
      *Head = newn;
  }
  else //if LL contains atleast one node
  {
      newn -> next =* Head;
      *Head = newn;
  }
}

int main()
{
   PNODE First = NULL;     //struct node * First = NULL;

    InsertFirst(&First ,101);  //InsertFirst(60,101);
    InsertFirst(&First ,51);   //InsertFirst(60,51);
    InsertFirst(&First ,21);    //InsertFirst(60,21);
    InsertFirst(&First ,11);    //InsertFirst(60,11);

    return 0;
}