//Accept number from user and display it is perfect number or not

#include<stdio.h>
#include<stdbool.h>

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
     iSum=iSum+iCnt;
  }
}
 return iSum;
}

bool CheckPerfect(int iNo)
{
  int iAns=0;
  iAns=SumFactor(iNo);
  if(iAns==iNo)
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
auto int iValue = 0;
bool bRet =false;

printf("Enter the number: \n");

scanf("%d",&iValue);

bRet = CheckPerfect(iValue);

if(bRet == true)
{
  printf("%d is a perfect number",iValue);
}
else
{
  printf("%d is a not perfect number",iValue);
}


return 0;
}




//Time Complexity : O(N)