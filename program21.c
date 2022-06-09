//Accept number from user and display the addition factors


#include<stdio.h>

int SumFactor(int iNo)
{
auto int iCnt = 0;
int iSum =0; 

if(iNo<0)                             
{
iNo=-iNo;
}

for(iCnt=1;iCnt<=(iNo/2);iCnt++)
{
  if((iNo % iCnt)==0)
  {
   //printf("%d\n",iCnt);
     iSum=iSum+iCnt;
  }
 
}
 return iSum;
}


int main()
{
auto int iValue = 0;
int iRet =0;

printf("Enter the number: \n");

scanf("%d",&iValue);

iRet = SumFactor(iValue);

printf("Sum of factors %d\n",iRet);
return 0;
}




//Time Complexity : O(N)