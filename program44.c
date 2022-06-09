//armstrong number or not

#include<stdio.h>
#include<stdbool.h>
 int Power(int iNo1, int iNo2)
{
  register int iCnt = 0;
   int iMult= 1;

 for(iCnt=1;iCnt<=iNo2;iCnt++)
  {
    iMult=iMult*iNo1;
  }
  return iMult;
}

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
      iDigit = iNo % 10;
      iSum = iSum +Power(iDigit,iDigCnt);
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