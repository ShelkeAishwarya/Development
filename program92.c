//input :  row =4  Column =4
/*  
    A 
    A B
    A B C
    A B C D 
*/   
//Reducing complexity N/2

#include<stdio.h>
void Display(int iRow,int iCol)
{
  int i= 0 ,j =0;
  char ch = '\0';
  
   for(i=1;i<=iRow;i++)  
    {
      for(j=1,ch ='A';j<=i;j++,ch++)  
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
