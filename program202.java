import java.lang.*;
import java.util.*;

class program202
{
    public static void main(String arg[])
    {
      Student obj = new Student("Aish",1000);
      System.out.println(obj.RID);
      System.out.println(obj.Name);
      System.out.println(obj.Salary);

      Student obj2 = new Student("Abhi",2000);
      System.out.println(obj2.RID);
      System.out.println(obj2.Name);
      System.out.println(obj2.Salary);
   }
}

class Student
{
  public int RID;
  public String Name;
  public int Salary;

  private static int Generator =0;

  public Student(String str , int value)
   {
     this.RID =++Generator;
     this.Name = str;
     this.Salary = value;
   }
}

