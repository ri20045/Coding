import java.util.*;
/*Que 1:
Write a program to get and display details of Employees with following consideration:
- Make a class Salary_Details that takes no of days present and wage.
- Write method to calculate total salary as no of days * wage
- Generate an exception to check divide by zero error.
- Generate an UDF exception that arises if number of days enter is less than zero 
- Generate an UDF method that throws exception if wage amount is less than 10 */
class MyException1 extends Exception{
   public MyException1(String message){
      super(message);
   }
}

class MyException2 extends Exception{
   public MyException2(String message){
      super(message);
   }
}
class Salary_Details{
   int wage,days, total;
   void getData(){
      Scanner sc = new Scanner(System.in);
      System.out.println("wage: ");
      wage = sc.nextInt();
      System.out.println("Enter days: ");
       days = sc.nextInt();
   }
   void calculate(){
      try{
         if(wage == 0){
            throw new ArithmeticException("divide by zero");
         }
         else{
            total = wage * days;
            System.out.println("Total: "+ total);
         }
      }
      catch(ArithmeticException e){
         System.out.println("Caught: "+e.getMessage());
      }
      try{
         if(days < 0){
            throw new MyException1("Invalid muexception1");
         }
         // else{
         //    total = wage * days;
         //    System.out.println("Total: "+ total);
         // }
      }
      catch(MyException1 e1){
         System.out.println(e1.getMessage());
      }
      try{
         if(wage < 10){
            throw new MyException2("Invalid 2");
         }
         // else{
         //    total = wage * days;
         //    System.out.println("Total: "+ total);
         // }
      }
      catch(MyException2 e2){
         System.out.println(e2.getMessage());
      }
   }
}
class code{
   public static void main(String[] args) {
      Salary_Details sd = new Salary_Details();
      sd.getData();
      sd.calculate();
   }
}
