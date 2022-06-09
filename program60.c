#include<stdio.h>
#include<stdlib.h>
//positive & negative
int Frequency(int Arr[], int iLength , int iNo)
{
    int iCnt = 0;
    int iFrequency =0;

 for(iCnt = 0; iCnt< iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
         iFrequency++ ;
        }
    }
    return iCnt;
}


int main()
{
   int iSize = 0, iCnt = 0 , iRet = 0;
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

 printf("Enter number to calculatr frequency : \n");
 scanf("%d",&iValue);

 iRet = Frequency(ptr,iSize,iValue);

 printf("Frequency is :%d\n",iRet);
  
  free(ptr);
return 0;
}