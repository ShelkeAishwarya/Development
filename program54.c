#include<stdio.h>
#include<stdlib.h>   //for malloc and free

void DisplayEven(int Arr[],int iLenghth)
{
  int iCnt=0;

   printf("Even elemnts are :\n");

  for(iCnt=0;iCnt<iLenghth;iCnt++)
  {
    if((Arr[iCnt]) % 2==0)
    {
      printf("%d\n",Arr[iCnt]);
    }
  }
} 
int main()
{
  int iSize=0 ,iCnt=0;
  int *ptr =NULL;

  printf("Enter the number elements:\n");
  scanf("%d\n",&iSize);

  ptr = (int*)malloc(iSize * sizeof(int));

  for(iCnt=0;iCnt<iSize;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  DisplayEven(ptr,iSize);

  free(ptr);
return 0;
}