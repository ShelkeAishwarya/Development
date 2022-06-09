//problems on digit
//input: 456
//output:3

#include<stdio.h>

int CountDigit(int iNo)
{
  int iCnt = 0;

 if(iNo < 0)
  {
    iNo = -iNo;
  }
while(iNo > 0)
{
    iCnt ++;
  iNo=iNo/10;
}
return iCnt;
}

int main()
{
  int iValue=0;
  int iRet =0;

  printf("Enter the number \n");
  scanf("%d",&iValue);

  iRet = CountDigit(iValue);

  printf("Number of digit is : %d \n",iRet);


  return 0;
}