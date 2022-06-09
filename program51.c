#include<stdio.h>

void Display(int ptr[])
{
  int iCnt =0;
 printf("Elents of array are : \n");
  
  for(iCnt=0;iCnt<5;iCnt++)
  {
     printf("%d\n",ptr[iCnt]);
  }
  
}

int main()
{
  int Arr [5];
  register int iCnt =0;

  printf("Enter Elements: \n");

  for(iCnt=0;iCnt<=4;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }

Display(Arr);
  return 0;
}