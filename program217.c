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

int Frequency(PNODE Head , int iNo)
{
 int iCnt =0;

 while(Head != NULL)
 {
   if(Head->data==iNo)
    {
     iCnt++;
    }
   Head = Head->next;
 }
return iCnt;
}

int main()
{
   PNODE First = NULL; 
   int iRet =0;   

    InsertFirst(&First ,20);  
    InsertFirst(&First ,20);   
    InsertFirst(&First ,30);   
    InsertFirst(&First ,20);    
    InsertFirst(&First ,10);

   Display(First); 
   iRet = Frequency(First,20);
   printf("Frequency is : %d \n",iRet);
   return 0;
}