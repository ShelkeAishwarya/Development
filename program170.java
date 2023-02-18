import java.lang.*;
import java.util.*;

class program170
{
    public static void main(String arg[])
    {
           int i =0, j = 0, iSum = 0;
           Scanner sobj = new Scanner(System.in);

           System.out.println("Enter number of rows");
           int irow = sobj.nextInt();

           System.out.println("Enter number of columns");
           int icol = sobj.nextInt();

           int Arr[][] = new int[irow][icol];


           System.out.println("Enter the data: ");
           for(i = 0; i < Arr.length; i++)
           {
                for(j = 0; j < Arr[i].length; j++)
                {
                    Arr[i][j] = sobj.nextInt();
                }
           }

           System.out.println("Elements of array are: ");
           for(i = 0; i < Arr.length; i++)
           {
                for(j = 0; j < Arr[i].length; j++)
                {
                       System.out.print(Arr[i][j]+" ");
                }
                  System.out.println();
           }
       Arr = null;
       System.gc();
         
     }
}