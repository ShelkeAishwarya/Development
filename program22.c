//Accept number from user and display it is perfect number or not


#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
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
  if(iSum>iNo)              //optimise the time complexity
 {
  break;
  }
}
 if(iSum==iNo)
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
  printf("%d It is a perfect number\n",iValue);
}
else
{
  printf("%d It is a not perfect number",iValue);
}


return 0;
}




//Time Complexity : O(N)