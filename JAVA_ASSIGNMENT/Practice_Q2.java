import java.util.*;

// 2.Write JAVA code to Create a class employee with code, name, salary, age as members
// Derive class department from employee with dept_code and dept_name as members.
// Use get_data() and show() functions to capture and display the information of employees.
// Capture details of 3 employees using array and pass array object as argument
// to function show().

class Employee{
	int code;
	String name;
	double salary;
	int age;

	void get_data(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter employee code: ");
		code = sc.nextInt();
		System.out.println("Enter employee name: ");
		name = sc.next();
		System.out.println("Enter employee salary: ");
		salary = sc.nextDouble();
		System.out.println("Enter employee age: ");
		age = sc.nextInt();
	}
	void show(){
		System.out.println("Employee code: "+code);
		System.out.println("Employee name: "+name);
		System.out.println("Employee Salary: "+salary);
		System.out.println("Employee age: "+age);
	}
}
class Department extends Employee{
	int dept_code;
	String dept_name;

	void get_data(){
		super.get_data();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter department code: ");
		dept_code = sc.nextInt();
		System.out.println("Enter department name: ");
		dept_name = sc.next();
	}
	void show(){
		super.show();
		System.out.println("Department code: "+dept_code);
		System.out.println("Department name: "+dept_name);
	}
}
class code{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter n: ");
		int n = sc.nextInt();
		Department d[] = new Department[n];
		for(int i=0;i<n;i++){
			d[i] = new Department();
			System.out.println("Enter details of Employee"+(i+1));
			d[i].get_data();
		}
		System.out.println(".................................................................");
		System.out.println("DISPLAY EMPLOYEE INFORMATION");

		for(int i=0;i<n;i++){
			System.out.println("Details of Employee"+(i+1));
			d[i].show();
			System.out.println();
		}
	}
}
