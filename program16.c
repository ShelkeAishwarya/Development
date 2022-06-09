#include<stdio.h>

void DisplayClass(float fMarks)
{

if((fMarks>0.0) && (fMarks<35.0))
{
printf("You Are Fail\n");
}

else if((fMarks>=35.0) && (fMarks<50.0))
{
printf("Pass class\n");
}

else if((fMarks>=50.0) && (fMarks<60.0))
{
printf("Second Class\n");
}

else if((fMarks>=60.0) && (fMarks<70.0))
{
printf("first class\n");
}

else if((fMarks>=70.0) && (fMarks<=100.0))
{
printf("first class With Distinction\n");
}
else
{
printf("Invalid Marks");
}
}

int main()
{
float fValue=0.0;

printf("Enter Your Percentage\n");
scanf("%f",&fValue);

DisplayClass(fValue);

return 0;
}