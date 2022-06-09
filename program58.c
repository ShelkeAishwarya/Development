#include<stdio.h>
#include<stdlib.h>
//positive & negative
int Minimum(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMini = Arr[0];

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
       if(iMini > Arr[iCnt])
       {
        iMini = Arr[iCnt];
       }     
    }
    return iMini;
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


 iRet = Minimum(ptr,iSize);

 printf("Minimum number is : %d",iRet);
  
  free(ptr);
return 0;
}