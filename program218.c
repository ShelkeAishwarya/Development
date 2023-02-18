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

void SumFactors(PNODE Head)
{
 int iCnt =0;
 int iNo =0;
 int iSum=0;

 while(Head != NULL)
 {
   for(iCnt=1,iSum=0,iNo = Head->data;iCnt<=(iNo/2);iCnt++)
   {
     if((iNo % iCnt)==0)
    {
     iSum=iSum+iCnt;
    }
} 
   printf("%d : %d \n",Head->data,iSum);
   Head = Head->next;
 }
}

int main()
{
   PNODE First = NULL; 
   int iRet =0;   

    InsertFirst(&First ,50);  
    InsertFirst(&First ,20);   
    InsertFirst(&First ,38);   
    InsertFirst(&First ,24);    
    InsertFirst(&First ,22);

   Display(First); 
   SumFactors(First);
   return 0;
}