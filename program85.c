//input :  row =6  Column =6
/*  
     *                                       
     *   *  
     *   *   *   
     *   *   *   *      
*/ 
//Reducing complexity N/2

#include<stdio.h>
void Display(int iRow,int iCol)
{
  int i= 0 ,j =0;
if(iRow != iCol)
  {
    return;
  }
  
   for(i=1;i<=iRow;i++)  
    {
      for(j=1;j<=i;j++)  
      {
       if(i>=j)
       {
         printf("*\t");
       }
      
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
