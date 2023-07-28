import java.util.*;
// Write a java code to print fibonacci series

class code{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of terms in the Fibonacci series: ");
        int n = sc.nextInt();

        int firstTerm = 0;
        int secondTerm = 1;
        System.out.print("Fibonacci Series: ");
        
        for (int i = 0; i < n; i++) {
            System.out.print(firstTerm + " ");

            int nextTerm = firstTerm + secondTerm;
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }

        scanner.close();
    }
    }
