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

int SearchFirstOccurance(PNODE Head , int iNo)
{
 int iPos = 1;

 while(Head != NULL)
 {
   if(Head->data==iNo)
      {
        break;
       }
   iPos++;
  Head = Head->next;
}
  if(Head==NULL)
    {
      return -1;
    }
  else
   {
     return iPos;
   } 
}
int main()
{
   PNODE First = NULL;  
   int iRet=0; 

    InsertFirst(&First ,6);  
    InsertFirst(&First ,28);   
    InsertFirst(&First ,496);   
    InsertFirst(&First ,24);  
    InsertFirst(&First ,24);   
    InsertFirst(&First ,22);

   Display(First); 

   iRet=SearchFirstOccurance(First,1);
   if(iRet == -1)
       {
         printf("No such element");
       }
  else
       {
          printf("Element at index: %d\n ",iRet);
        }
   return 0;
}