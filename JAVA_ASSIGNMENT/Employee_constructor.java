import java.util.*;
// Write a program to get and display details of Employees with following:
// 1. Take details as id, name, department and salary.
// 2. Define class Employee to capture the details. (this should be different than class where main() is defined) 
// Pass values as arguments to constructors to initialise the variables of class
// 3. Make object E1 - should be initialised with all 4 variables
// 4. Make object E2 - should be initialised with 3 variables
// 5. Make object E3 - should be initialised as copy of object E1
class Employee{
    private int id;
    private String name;
    private String department;
    private double salary;

    public Employee(){
        System.out.println("Default constructor");
    }

    public Employee(int id, String name,String department,double salary){
        this.id = id;
        this.name = name;
        this.department = department;
        this.salary = salary;
    }
    public Employee(int id, String name, String department){
        this.id = id;
        this.name = name;
        this.department = department;
    }
    public Employee(Employee cObj){
        this.id = cObj.id;
        this.name = cObj.name;
        this.department = cObj.department;
        this.salary = cObj.salary;
    }
    public void display(){
        System.out.println("ID: "+id);
        System.out.println("name: "+name);
        System.out.println("Department: "+department);
        System.out.println("Salary: "+salary);
    }
}
class code{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter details of employee1:");
        System.out.print("ID: ");
        int id1 = sc.nextInt();
        sc.nextLine(); 
        System.out.print("Name: ");
        String name1 = sc.nextLine();
        System.out.print("Department: ");
        String department1 = sc.nextLine();
        System.out.print("Salary: ");
        double salary1 = sc.nextDouble();

        Employee e1 = new Employee(id1,name1,department1,salary1);
        e1.display();

        Employee e2 = new Employee(id1,name1,department1);
        e2.display();

        Employee e3 = new Employee(e1);
        e3.display();
    }
}
