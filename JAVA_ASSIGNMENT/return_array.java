import java.util.*;
// 1. Write a program to get and display details of Employees with following:
// i. Take details as id, name, department and salary.
// ii. Define class Employee to capture the details. (this should be different than class where main() is defined)
// iii. Declare objects as array of 5 class variabes.
// iv. Take values of class variables from main class and pass them to class objects (pass array of object)
// v. Take values of class variables from method in class and return them to main class for printing (return array of object)

    class Employee{
        private int id;
        private String name;
        private String department;
        private double salary;

    public Employee(int id, String name,String department,double salary){
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }
    public void displayDetails() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Department: " + department);
        System.out.println("Salary: " + salary);
        System.out.println();
    }
}
    class code{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        Employee[] emp = new Employee[5];
        for(int i=0;i<emp.length;i++){
            System.out.println("Enter details of employee "+(i+1)+":");
            System.out.println("ID: ");
            int id = sc.nextInt();
            System.out.println("Name: ");
            String name = sc.next();
            System.out.println("Department: ");
            String department = sc.next();
            System.out.print("Salary: ");
            double salary = sc.nextDouble();
            emp[i] = new Employee(id,name,department,salary);
        }
        System.out.println("\nEmployee Details");
        for(Employee e:emp){
            e.displayDetails();
        }
    }
}
