//input : 5
//Output : * * * * * 

#include<stdio.h> 

void Display(int iNo)
{
  int iCnt = 0;

  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
      printf("*\t");
  }
}

int main()
{
    int iValue =0 ;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}