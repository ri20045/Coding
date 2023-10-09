import java.util.*;
// 1. Declare Interface A.
// It should have method add, subtract
// Define class x and class y that uses A.
// Class x must add and subtract 2 integer numbers. Class y must add and subtract 2 float numbers.

interface A{
   public void Add();
   public void Subtract();
}
class X implements A{
   public void Add(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter intA: ");
      int A = sc.nextInt();
      System.out.println("Enter intB: ");
      int B = sc.nextInt();
      System.out.println("Addition of two integers: "+(A+B));
   }
   public void Subtract(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter intA: ");
      int A = sc.nextInt();
      System.out.println("Enter intB: ");
      int B = sc.nextInt();
      System.out.println("Subtraction of two integers: "+(A-B));
   }
}
class Y implements A{
   public void Add(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter floatA: ");
      float A = sc.nextFloat();
      System.out.println("Enter floatB: ");
      float B = sc.nextFloat();
      System.out.println("Addition of two float numbers: "+(A+B));
   }
   public void Subtract(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter floatA: ");
      float A = sc.nextFloat();
      System.out.println("Enter floatB: ");
      float B = sc.nextFloat();
      System.out.println("Subtraction of two float numbers: "+(A-B));
   }
}
class code{
   public static void main(String[] args) {
      X x = new X();
      Y y = new Y();

      x.Add();
      x.Subtract();

      y.Add();
      y.Subtract();
   }
}
