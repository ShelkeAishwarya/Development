//Accept number from user and display the factors of that number.


#include<stdio.h>

void DisplayFactor(int iNo)
{
auto int iCnt = 0;

if(iNo<0)                             
{
iNo=-iNo;
}

for(iCnt=1;iCnt<=iNo-1;iCnt++)
{
  if((iNo % iCnt)==0)
  {
     printf("%d\n",iCnt);
  }
}
}

int main()
{
auto int iValue = 0;

printf("Enter the number: \n");
scanf("%d",&iValue);

DisplayFactor(iValue);
return 0;
}

//Time Complexity : O(N)