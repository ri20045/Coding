import java.util.Scanner;
/*
Write a program with following consideration:
Create class Result that uses to get Data for student and display the total and average of marks - it has variable id, name, type(1st sess, 2nd sess, cec), marks[5]
- Generate an exception to check ArrayIndexoutof bound
- Generate an UDF exception that explicitly throw Arithmetic Exception
- Generate an UDF method that throws an exception when type of exam is 1st sess and marks is greater than 25 */
class MyException extends Exception {
    public MyException(String message) {
        super(message);
    }
}

class Result {
    int id;
    String name;
    String type;
    int[] marks = new int[5];
    double total;
    double average;

    void getData() throws MyException {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter student ID: ");
        id = sc.nextInt();
        sc.nextLine(); // Consume newline
        System.out.println("Enter Student name: ");
        name = sc.nextLine();
        System.out.println("Enter Exam type (1st sess, 2nd sess, cec): ");
        type = sc.nextLine();
        if (type.equals("1st sess")) {
            System.out.println("Enter marks (out of 25) for 5 subjects: ");
            for (int i = 0; i < 5; i++) {
                marks[i] = sc.nextInt();
                if (marks[i] > 25) {
                    throw new MyException("Marks cannot be greater than 25 in 1st sess");
                }
            }
        } else if (type.equals("2nd sess") || type.equals("cec")) {
            System.out.println("Enter marks (out of 100) for 5 subjects: ");
            for (int i = 0; i < 5; i++) {
                marks[i] = sc.nextInt();
            }
        } else {
            throw new MyException("Invalid exam type");
        }
    }

    void calculate() {
        total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        average = total / 5;
    }

    void display() {
        System.out.println("Student ID: " + id);
        System.out.println("Student name: " + name);
        System.out.println("Exam type: " + type);
        System.out.println("Total marks: " + total);
        System.out.println("Average marks: " + average);
    }
}

public class code {
    public static void main(String[] args) {
        Result result = new Result();
        try {
            result.getData();
            result.calculate();
            result.display();
        } catch (MyException e) {
            System.out.println("Exception: " + e.getMessage());
        }
    }
}
