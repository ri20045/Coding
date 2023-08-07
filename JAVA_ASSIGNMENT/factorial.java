import java.util.*;
public class code {
    public static void main(String[] args){
       int fact = 1;
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter a number: ");
       int num = sc.nextInt(); 
       for(int i=1;i<=num;i++){
        fact = fact * i;
       }
       System.out.println("The factorial of "+ num + " is: "+fact);
    }
}
