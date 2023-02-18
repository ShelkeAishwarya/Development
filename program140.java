 //toggle 4th & 7th bit of that number 

import java.lang.*;
import java.util.*;

class program139
{
  public static void main(String arg[])
  {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.CheckBit(value);

        System.out.println(iRet);
       
  } 
}

class Bitwise
{
  public int CheckBit(int iNo)
  {
    int  iMask = 0X00000048;
    int  iResult = 0;

    iResult = iNo ^ iMask ;
    return iResult;
  }
}
