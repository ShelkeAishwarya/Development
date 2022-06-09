#include<stdio.h>
#include<stdlib.h>
//positive
int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax= 0;

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
       if(iMax < Arr[iCnt])
       {
        iMax = Arr[iCnt];
       }     
    }
    return iMax;
}


int main()
{
   int iSize = 0, iCnt = 0 , iRet = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));


    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


 iRet = Maximum(ptr,iSize);

 printf("Max number is : %d",iRet);
  
  free(ptr);
return 0;
}