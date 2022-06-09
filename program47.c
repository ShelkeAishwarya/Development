#include<stdio.h>

int main()
{
  int [5];
  register int iCnt =0;

  printf("Enter Elements: \n");

  for(iCnt=0;iCnt<=4;iCnt++)
  {
    scanf("%d",&Arr[iCnt]);
  }

  printf("Elents of array are : \n");
  
  for(iCnt=0;iCnt<5;iCnt++)
  {
     printf("%d\n",Arr[iCnt]);
  }
  
  return 0;
}