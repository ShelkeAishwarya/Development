

#include<stdio.h>

int SumOdd(int iNo)
{
  int iDigit = 0;
  
  int iSum=0;

 if(iNo < 0)
  {
    iNo = -iNo;
  }
while(iNo > 0)
{
 
  iDigit = iNo%10;
 
   if((iNo%2)!=0)
  {
  iSum=iSum+iDigit;
  }
  iNo  =iNo/10;
  }
  return iSum;
}

int main()
{
  int iValue=0;
  int iRet =0;

  printf("Enter the number \n");
  scanf("%d",&iValue);

 iRet = SumOdd(iValue);

 printf("Sum of Odd digit :%d",iRet);

  return 0;
}