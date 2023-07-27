import java.util.*;
// 4.write a Java program to enter a value from user and check perticuler value is positive, negative or zero
class code{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter an integer:");
        int num = sc.nextInt();
        if(num > 0){
            System.out.println("positive integer");
        }
        if(num < 0){
            System.out.println("negative integer");
        }
        if(num == 0){
            System.out.println("zero");
        }
    }
}
