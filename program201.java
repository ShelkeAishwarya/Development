import java.lang.*;
import java.util.*;

class program201
{
    public static void main(String arg[])
    {
      Student obj = new Student(11,"Aish",1000);
      System.out.println(obj.RID);
      System.out.println(obj.Name);
      System.out.println(obj.Salary);
   }
}

class Student
{
  public int RID;
  public String Name;
  public int Salary;

  public Student(int no, String str , int value)
   {
     this.RID = no;
     this.Name = str;
     this.Salary = value;
   }
}

