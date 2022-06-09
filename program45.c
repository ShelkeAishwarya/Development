//armstrong number or not

#include<stdio.h>
#include<stdbool.h>


bool CheckArm(int iNo)
{
  int iDigCnt =0;
  int iSum = 0;
  int iTemp=0;
  int iCnt=0;
  int iDigit=0;
  int iMult =1;

  if(iNo<0)
  {
    iNo = -iNo;
  }
    iTemp = iNo;

  while (iNo > 0)
     {
     iDigCnt++;
     iNo=iNo/10;
     }

     iNo=iTemp;

    while(iNo>0)
    {
      iMult =1;
      iDigit = iNo % 10;

      for(iCnt=1;iCnt<=iDigCnt;iCnt++)
        {
           iMult=iMult*iDigit;
        }
      iSum = iSum +(iMult);
      iNo = iNo/10;
      
    }
     if(iSum == iTemp)
     {
       return true;
     }
    else
    {
      return false;
    }
}
int main()
{
  auto int iValue=0;
  bool bRet;
  
  printf("Enter Number : \n");
  scanf("%d",&iValue);

  bRet=CheckArm(iValue);
  if(bRet==true)
 {
   printf("%d Given number is Armostrn number\n",iValue);
 }
 else
 {
   printf("%d Given number is not Armstron number\n",iValue);
 }
  return 0;
}