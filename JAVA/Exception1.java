import java.util.*;
// Que 1:
// Write a program to get and display details of Employees with following consideration:
// - Create abstract methods getData and dispData() in Employee class.
// - Make a final class Personal_Details that takes emp_id, emp_name, emp_dob
// - Make a class Dept_Details that takes dept_id, dept_name, emp_designation
// (1 employee can be in 1 or more departments with same or different designation.)
// - Make a class Salary_Details that takes no of days present and wage. 
// - Write method to calculate total salary as no of days * wage
// - Generate an exception to check divide by zero error.

abstract class Employee{
   abstract void getData();
   abstract void dispData();
}
final class Personal_Details extends Employee{
   private int emp_id;
   private String emp_name;
   private String emp_dob;

   public void getData(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter empId: ");
       emp_id = sc.nextInt();
      System.out.println("Enter emp_name: ");
      emp_name = sc.next();
      System.out.println("Enter emp_dob: ");
       emp_dob = sc.next();
   }
   public void dispData(){
      System.out.println("Empoyee Id is: "+emp_id);
      System.out.println("Empoyee Name is: "+emp_name);
      System.out.println("Empoyee date of birth is: "+emp_dob);
   }
}
class Dept_Details extends Employee{
   private int dept_id;
   private String dept_name;
   private String dept_desig;
   public void getData(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter DeptId: ");
      dept_id = sc.nextInt();
      System.out.println("Enter Dept_name: ");
       dept_name = sc.next();
      System.out.println("Enter dept_designation: ");
      dept_desig = sc.next();
   }
   public void dispData(){
      System.out.println("Department Id is: "+dept_id);
      System.out.println("Department Name is: "+dept_name);
      System.out.println("Department designation is: "+dept_desig);
   }
}
class Salary_Details extends Employee{
   int NumOfDays;
   int wage;
   public void getData(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter Number of days present: ");
       NumOfDays = sc.nextInt();
      System.out.println("Enter wage: ");
      wage = sc.nextInt();
   }
   public void dispData(){
      System.out.println("Number of days present are: "+NumOfDays);
      System.out.println("Wage is: "+wage);
   }
   void Calculate() {
      try {
          if (NumOfDays == 0) {
              throw new ArithmeticException("Divide by zero error");
          } else {
              int totalSalary = wage * NumOfDays;
              System.out.println("Total Salary is: " + totalSalary);
          }
      } catch (ArithmeticException e) {
          System.out.println(e.getMessage());
      }
  }
}
class code{
   public static void main(String[] args) {
      Personal_Details pd = new Personal_Details();
      Dept_Details dd = new Dept_Details();
      Salary_Details sd = new Salary_Details();

      pd.getData();
      dd.getData();
      sd.getData();

      pd.dispData();
      dd.dispData();
      sd.dispData();
      sd.Calculate();
   }
}
