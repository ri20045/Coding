import java.util.*;
/*Que 1:
Write a program to get and display details of Employees with following consideration:
- Make a class Salary_Details that takes no of days present and wage.
- Write method to calculate total salary as no of days * wage
- Generate an exception to check divide by zero error.
- Generate an UDF exception that arises if number of days enter is less than zero 
- Generate an UDF method that throws exception if wage amount is less than 10 */

class DaysException extends Exception{
    public DaysException(String message){
        super(message);
    }
}
class WageException extends Exception{
    public WageException(String message){
        super(message);
    }
}
class Salary_details{
    int days;
    double wage;
    Salary_details(int days, double wage){
        try{
            if(days == 0){
                throw new ArithmeticException("Divide by zero");
            }
            if(days < 0){
                throw new DaysException("Days cannot be negative");
            }
            if(wage < 10){
                throw new WageException("Wage cannot be less than 10 days");
            }
            this.days = days;
            this.wage = wage;
        }
        catch(ArithmeticException | DaysException | WageException e){
            System.out.println("Exception: "+e.getMessage());
        }
    }
    public double calculate(){
        return (days * wage);
    }
}
class code{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of days: ");
        int daysPresent = sc.nextInt();
        System.out.println("Enter wage: ");
        double wageOfEmployee = sc.nextInt();

        Salary_details sd = new Salary_details(daysPresent,wageOfEmployee);
        System.out.println("Salary of Employee is: "+sd.calculate());
    }
}
