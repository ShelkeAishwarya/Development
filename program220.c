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

void SumDigit(PNODE Head )
{
 int iNo =0;
 int iDigit =0;
 int iSum=0;

 while(Head != NULL)
 {
   iNo = Head ->data;
   while(iNo>0)
    {
      iDigit = iNo%10;
      iSum = iSum + iDigit;
      iNo = iNo/10;
    }
  printf("%d : %d\n",Head->data,iSum);
  iSum =0;
  Head = Head->next;
}
}

int main()
{
   PNODE First = NULL;   

    InsertFirst(&First ,6);  
    InsertFirst(&First ,28);   
    InsertFirst(&First ,496);   
    InsertFirst(&First ,24);    
    InsertFirst(&First ,22);

   Display(First); 

   SumDigit(First);
   return 0;
}