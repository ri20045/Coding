import java.util.*;
// Write a Java program to enter two values using scanner class and perform arithmaric operation using switch case
class code{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter 1st number: ");
        double num1 = sc.nextDouble();
        System.out.println("Enter 2nd number: ");
        double num2 = sc.nextDouble();
        System.out.println("Choose an arithmetic operation:");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        int choice = sc.nextInt();
        double result = 0;
        switch(choice){
            case 1:
            result = num1 + num2;
            break;
            case 2:
            result = num1 - num2;
            break;
            case 3:
            result = num1 * num2;
            break;
            case 4:
            if(num2 != 0){
                result = num1/num2;
            }else{
                System.out.println("cannot perform");
                System.exit(0);
            }
            break;
            default:
            System.out.println("Inavlid choice");
            System.exit(0);
        }
        System.out.println("Result: "+result);
    }
}
