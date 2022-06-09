#include<stdio.h>

void Display(int Arr[])
{
  int iCnt =0;
 printf("Elents of array are : \n");
  
  for(iCnt=0;iCnt<5;iCnt++)
  {
     printf("%d\n",Arr[iCnt]);
  }
  
}

int main()
{
  int Brr [5];
  register int iCnt =0;

  printf("Enter Elements: \n");

  for(iCnt=0;iCnt<=4;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

Display(Brr);
  return 0;
}