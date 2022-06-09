//Accept the number from user and check whether it is priime no or not


#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
int iCnt=0;

for(iCnt=1;iCnt=iNo/2;iCnt++)
{
  if(((iCnt%1)==0)&&(iCnt%iNo)==0)
  {
    return true;
  }
  else
  {
     return false;
  }
}
}

int main()
{
auto int iValue = 0;
bool bRet = false;

printf("Enter the number: \n");
scanf("%d",&iValue);
 
bRet=CheckPrime(iValue);

if(bRet==true)
{
  printf("%d It is Prime number",iValue);
}
else
{
printf("%d It is not Prime number",iValue);
}
return 0;
}




//Time Complexity : O(N)