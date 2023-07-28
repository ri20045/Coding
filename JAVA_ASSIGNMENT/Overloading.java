import java.util.*;
// 26. Write a Java code to implement sum of numbers which pass through different argument using Function Overloading.
class code{
    public static void main(String[] args){
        int Integersum = sum(1,2,3);
        double doublesum = sum(2.5,2.5);
        System.out.println("Sum of integers: "+Integersum);
        System.out.println("Sum of double: "+doublesum);
    }
    public static int sum(int num1,int num2,int num3){
        return num1 + num2 + num3;
    }
    public static double sum(double num1,double num2){
        return num1 + num2;
    }
}
