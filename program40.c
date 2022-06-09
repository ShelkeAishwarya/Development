//Accept number from user and check it is palendrome or not 

#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
  int iDigit = 0;
  int iRev = 0;
  int iTemp=0;

  if(iNo<0)
  {
    iNo = -iNo;
  }
      iTemp = iNo;

    while (iNo > 0)
     {
      iDigit = iNo % 10;
       iRev = iRev * 10 + iDigit;
      iNo = iNo/10;
      
     }
     if(iRev == iTemp)
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
  int iValue=0;
  bool bRet ;

  printf("Enter the number \n");
  scanf("%d",&iValue);

 bRet = CheckPalindrome(iValue);

 if(bRet==true)
 {
   printf("Given number is Palindrome\n",iValue);
 }
 else
 {
   printf("Given number is not Palindrome",iValue);
 }

  return 0;
}