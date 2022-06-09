#include<stdio.h>

////////////////////////////////////////////////////////
//
// Fuction Name : Addition
// Descriptrion : Used to perform addition of 2 numbers
// Input :        Integer, Integer
// Output :       Integer
// Date :         12/04/2022
// Author : 	 Aishwarya Kiran Shelke
//
////////////////////////////////////////////////////////

int Addition(int iValue1,int iValue2)
{
  int iAns =0;
  iAns = iValue1+iValue2;
  return iAns;
}

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