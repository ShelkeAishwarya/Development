#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));
  newn -> data = no;
  newn -> next = NULL;

  if(*Head != NULL)   
  {
      newn -> next =* Head;
   }
      *Head = newn;
}

void Display(PNODE Head)
{
 
 printf("Elements from linked list are: \n");

 while(Head != NULL)
 {
   printf("|%d|->",Head->data);
   Head = Head->next;

 }
 printf("NULL\n");
}

int MiddleElement(PNODE Head)
{
 int iSize = 0;
 int i = 0;
 PNODE temp = Head;

  while( Head != NULL)
   {
     iSize++;
     Head = Head->next;
    }
  Head = temp;

  for(i=0;i<iSize/2;i++)
  {
   Head = Head -> next;
  }
 return Head->data;
}
int main()
{
   PNODE First = NULL;  
   int iRet=0; 

    InsertFirst(&First ,6);  
    InsertFirst(&First ,28);   
    InsertFirst(&First ,496);   
    InsertFirst(&First ,22);  
    InsertFirst(&First ,24);   
    InsertFirst(&First ,22);
    InsertFirst(&First ,25);

   Display(First); 

   iRet=MiddleElement(First);
   printf("Middle element is :  %d",iRet);
   
   return 0;
}