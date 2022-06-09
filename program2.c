#include<stdio.h>

int Addition(int,int);

////////////////////////////////////////////////////////
// Write a program to perform addition of two numbers. 
////////////////////////////////////////////////////////

int main()
{
  int iNo1=0;
  int iNo2=0;
  int iRet=0;

  printf("Enter first number\n");
  scanf("%d",&iNo1);

  printf("Enter Second Number\n");
  scanf("%d",&iNo2);

  Addition(iNo1,iNo2); 

  iRet=Addition(iNo1,iNo2);

  printf("Addition is : %d",iRet);

  return 0;
}

////////////////////////////////////////////////////////
//
// Input  : 11   10
// Output : 21
//
////////////////////////////////////////////////////////