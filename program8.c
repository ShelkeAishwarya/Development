// take the input from user Display Hello on screen using for loop


#include<stdio.h>

void Display(int iNo)
{
int iCnt = 0;
if(iNo<0)                                  //filter 
{
printf("Please enter positive value\n");
return;
}

for(iCnt=0; iCnt<iNo; iCnt++)
{
printf("Hello...\n");
}
}

int main()
{
int iValue=0;

printf("Enter the number\n");
scanf("%d",&iValue);

Display(iValue);

return 0;
}