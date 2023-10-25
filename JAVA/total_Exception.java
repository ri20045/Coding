import java.util.*;

class ArithmeticExceptionUDF extends Exception {
    public ArithmeticExceptionUDF(String message) {
        super(message);
    }
}

class MyException extends Exception {
    public MyException(String message) {
        super(message);
    }
}

class Result {
    public void getData() {
        int id;
        String name;
        String type;
        int total = 0;
        int[] marks = new int[5];
        int n;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter id: ");
        id = sc.nextInt();
        sc.nextLine(); // Consume the newline character
        System.out.println("Enter name of student: ");
        name = sc.nextLine();
        System.out.println("Enter type of exam (1st sess, 2nd sess, cec): ");
        type = sc.nextLine();
        System.out.println("Enter number of marks you want: ");
        n = sc.nextInt();

        if (n > 5) {
            System.out.println("ArrayIndexOutOfBoundsException: Number of marks cannot exceed 5.");
            return; // Exit the method if n is greater than 5
        }

        for (int i = 0; i < n; i++) {
            System.out.println("Enter marks " + (i + 1) + ": ");
            marks[i] = sc.nextInt();
            total += marks[i];
        }

        try {
            if (total < 10) {
                throw new ArithmeticExceptionUDF("Below 10 is fail");
            }
        } catch (ArithmeticExceptionUDF e) {
            System.out.println("Caught: " + e.getMessage());
        }

        try {
            if ("1st sess".equals(type) && total > 25) {
                throw new MyException("Cannot be 1st sess and have a total above 25");
            }
        } catch (MyException e) {
            System.out.println("Caught: " + e.getMessage());
        }
    }
}

public class code {
    public static void main(String[] args) {
        Result r = new Result();
        r.getData();
    }
}
