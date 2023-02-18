import java.io.*;
import java.util.*;

class program168

{
    public static void main(String arg[])
    {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter first string : ");
            String str1 = sobj.nextLine();

            System.out.println("Enter second string : ");
            String str2 = sobj.nextLine();

            str1 = 
            str2 = str2.toLowerCase();

            char arr[] = str1.toCharArray();
            char brr[] = (str1.toLowerCase()).toCharArray();

            Arrays.sort(arr);
            Arrays.sort(brr);

            if(Arrays.equals(arr,brr))
               {
                  System.out.println("Strings are anagram");
                }
            else
                {
                  System.out.println("Strings are not anagram");
                }

            
     }
}