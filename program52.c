#include<stdio.h>
#include<stdlib.h>   //for malloc and free

void Display(int Arr[] , int iLenghth)
{
  int iCnt =0;
  printf("Elents of array are : \n");
  
  for(iCnt=0;iCnt<iLenghth;iCnt++)
  {
     printf("%d\n",Arr[iCnt]);
  }
}

int main()
{
  int iSize=0;
  int *ptr =NULL;
  register int iCnt =0;

  printf("Enter the Number of Elements \n");
  scanf("%d",&iSize);

  printf("Enter Elements \n");

  ptr = (int *)malloc(iSize*sizeof(int));

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  Display(ptr ,iSize);
  free(ptr);
  return 0;
}