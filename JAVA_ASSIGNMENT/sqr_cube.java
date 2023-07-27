import java.util.*;
// 1. Write a Java Program that will accept a number from the user and calculate its square and cube and display the same.
class code{
    static int num1;
    public static int calculate(int n1){
        num1 = n1;
        int sqr = num1 * num1;
        return sqr;
    }
    public static int cube(int n2){
        num1 = n2;
        int cube = num1 * num1 * num1;
        return cube;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st number: ");
        int num1 = sc.nextInt();
        System.out.println("sqr is: "+calculate(num1));
        System.out.println("cube is: "+cube(num1));
    }

}
