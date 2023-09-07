import java.util.*;
// Que 1:
// Write a program to get and display details of Employees with following consideration:
// - Create abstract methods getData and dispData() in Employee class.
// - Make a final class Personal_Details that takes emp_id, emp_name, emp_dob
// - Make a class Dept_Details that takes dept_id, dept_name, emp_designation
// (1 employee can be in 1 or more departments with same or different designation.)
// - Make a class Salary_Details that takes no of days present and wage. - 
// Write method to calculate total salary as no of days * wage
// - Generate an exception to check divide by zero error.

abstract class Employee{
    protected int emp_id;
    protected String emp_name;
    protected String emp_dob;

    abstract void getData();
    abstract void dispData();
}
final class PersonalDetails extends Employee{
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
        System.out.println("Employee ID: " + emp_id);
        System.out.println("Employee Name: " + emp_name);
        System.out.println("Employee Date of Birth: " + emp_dob);
    }
}
class Dept_Details extends Employee{
    protected int dept_id;
    protected String dept_name;
    protected String emp_designation;

   public void getData(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter dept_id: ");
        dept_id = sc.nextInt();
        System.out.println("Enter dept_name: ");
        dept_name = sc.next();
        System.out.println("Enter emp_designation: ");
        emp_designation = sc.next();
    }
   public void dispData(){
        System.out.println("Department ID: " + dept_id);
        System.out.println("Department Name: " + dept_name);
        System.out.println("Employee Designation: " + emp_designation);
    }
}
class Salary_Details extends Employee{
    protected int numOfDays;
    protected int wage;

    public void getData(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of days present: ");
        numOfDays = sc.nextInt();
        System.out.println("Enter wage: ");
        wage = sc.nextInt();
    }
    public void dispData(){
        
    }
    public double calculate_Salary(){
        return numOfDays * wage;
    }
}
class code{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of Employees you want information of: ");
        int n = sc.nextInt();
        PersonalDetails pd = new PersonalDetails();
        Dept_Details dd = new Dept_Details();
        Salary_Details sd = new Salary_Details();
        for(int i=0;i<n;i++){
            pd.getData();
            dd.getData();
            sd.getData();

            pd.dispData();
            dd.dispData();
            System.out.println("Total salary is: "+ sd.calculate_Salary());
        }
    }
}
