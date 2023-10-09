import java.util.*;
// 2. Define abstract methods add and subtract in class Parent.
// Derive class calculateInt from Parent. 
// It adds and subtracts 2 integer values Derive class calculateFloat from Parent. 
// It adds and subtracts 2 float values
abstract class Parent{
   public abstract void Add();
   public abstract void Subtract();
}
class CalculateInt extends Parent{
   public void Add(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter int A: ");
      int A = sc.nextInt();
      System.out.println("Enter int B: ");
      int B = sc.nextInt();
      System.out.println("Addition of two integers: "+ (A+B));
   }
   public void Subtract(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter int A: ");
      int A = sc.nextInt();
      System.out.println("Enter int B: ");
      int B = sc.nextInt();
      System.out.println("Subtraction of two integers: "+ (A-B));
   }
}
class calculateFloat extends Parent{
   public void Add(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter float A: ");
      float A = sc.nextFloat();
      System.out.println("Enter float B: ");
      float B = sc.nextFloat();
      System.out.println("Addition of two floats: "+ (A+B));
   }
   public void Subtract(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter float A: ");
      float A = sc.nextFloat();
      System.out.println("Enter float B: ");
      float B = sc.nextFloat();
      System.out.println("Subtraction of two floats: "+ (A-B));
   }
}
class code{
   public static void main(String[] args) {
      CalculateInt calInt = new CalculateInt();
      calculateFloat calFloat = new calculateFloat();

      calInt.Add();
      calInt.Subtract();

      calFloat.Add();
      calFloat.Subtract();
   }
}
