#include <stdio.h>

int Summation(int iNo)
{

int iCnt=0;
int iSum=0;

if(iNo<0)
{
iNo=-iNo;
}

for(iCnt=1;iCnt<=iNo;iCnt++)
{
iSum=iSum+iCnt;
}
return iSum;
}

int main()
{
int iValue=0;
int iRet =0;

printf("Enter The Number\n");
scanf("%d",&iValue);

iRet=Summation(iValue);

printf("Addition is %d\n",iRet);
return 0;
}
