//input :  row =4  Column =4
/*  
    A A A A
    B B B B
    C C C C
    D D D D 
*/   
//Reducing complexity N/2

#include<stdio.h>
void Display(int iRow,int iCol)
{
  int i= 0 ,j =0;
  char ch = '\0';
  
   for(i=1,ch ='A';i<=iRow;i++,ch++)  
    {
      for(j=1;j<=iCol;j++)  
      {
         printf("%c\t",ch);
      }
      
  printf("\n");
    }
     
}
int main()
{
    int iValue1=0 ;
    int iValue2=0 ;


    printf("Enter Number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Colums : \n");
    scanf("%d",&iValue2);

    Display(iValue1 ,iValue2);
    return 0;
}
