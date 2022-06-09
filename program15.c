//accept number from user and check wheather is divisible by 3 & 5

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if(
     ((iNo % 3)==0) && 
     ((iNo % 5)==0)
    )
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
int iValue =0;
bool bRet=false;

printf("Enter your number\n");
scanf("%d",&iValue);

bRet = CheckEven(iValue);
if(bRet==true)
{
printf("%d is divisible by 3 and 5\n",iValue);
}
else
{
printf("%d is not divisible by 3 and 5\n",iValue);
}
return 0;
}