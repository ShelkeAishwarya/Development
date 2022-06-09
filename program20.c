//Accept number from user and display the non factors of that number reduce time complexity


#include<stdio.h>

void DisplayNonFactor(int iNo)
{
auto int iCnt = 0;

if(iNo<0)                             
{
iNo=-iNo;
}

for(iCnt=1;iCnt<iNo;iCnt++)
{
  if((iNo % iCnt)!=0)
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

DisplayNonFactor(iValue);
return 0;
}




//Time Complexity : O(N)