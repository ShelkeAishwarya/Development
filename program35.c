//problems on digit
//input: 456
//output:15

#include<stdio.h>

int SumDigit(int iNo)
{
  int iDigit = 0;
  int iSum = 0;

 if(iNo < 0)
  {
    iNo = -iNo;
  }
while(iNo > 0)
{
  iDigit = iNo%10;
  iSum = iSum+iDigit;
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

  iRet = SumDigit(iValue);

  printf("Sum of digit is : %d \n",iRet);


  return 0;
}