//Display 5 times Hello on screen using for loop


#include<stdio.h>

void Display()
{
int iCnt = 0;

for(iCnt=1; iCnt<=5; iCnt++)
{
printf("Hello...\n");
}
}

int main()
{
Display();
return 0;
}