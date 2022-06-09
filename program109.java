import java.lang.*;
import java.util.*;

class program109
{
public static void main(String arg[])
{
     Number nobj = new Number();

     nobj.Accept();
     nobj.Display();

     int iRet = nobj.Factorial();
     System.out.println("Factorial is:"+iRet);

}
}
class Number
{
     private int iNo;

public void Accept()
     {
     Scanner sobj = new Scanner(System.in);
     System.out.println("Enter the Numer");
     this.iNo = sobj.nextInt();
     }

public void Display()
     {
      System.out.println("Value is :"+this.iNo);
     }
 public int Factorial()
    {
        int iFact= 1;
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
        {
          iFact = iCnt * iFact;
        }
        return iFact;
    }
}
