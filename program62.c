#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
  
 for(iCnt = 0 ; iCnt< iLength ;iCnt++ )
    {
    if(Arr[iCnt]==iNo)
        {
           
           break;
        }
     }
     if(iCnt == iLength)
     {
    return false;
     }
     else
     {
        return true;
     }
   
}

int main()
{
   int iSize = 0, iCnt = 0 ;
   bool  bRet;
   int iValue =0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));


    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

 printf("Enter element to search: \n");
 scanf("%d",&iValue);

 bRet =Search(ptr,iSize,iValue);

 if(bRet==true)
 {
printf("Contain that number \n",bRet);
 }
 else
 {
   printf("does not contain that element \n",bRet);  
 }
  
  free(ptr);
return 0;
}