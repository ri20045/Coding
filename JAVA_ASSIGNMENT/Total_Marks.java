import java.util.*;
// Que 2:
// Write a program with following consideration:
// - Declares an interface Student.
// - it has methods to get data and display data.
// - Declare an interface Exam
// - it has methods to get data and display data.
// Create class Result that uses interface to get Data for student 
// and display the total and average of marks - 
// it has variables id and name (use methods of student interface)
// - it has variable name, type(1st sess, 2nd sess, cec), 
// marks[5] (use methods of exam interface) - Generate an exception to check array Index out of bound
import java.util.*;

interface Student {
    void getData();

    void dispData();
}

interface Exam {
    void getExamData();

    void dispExamData();
}

class Result implements Student, Exam {
    private int id;
    private String name;
    private String examName;
    private String examType;
    Scanner sc = new Scanner(System.in);
    private int[] marks = new int[5];

    public void getData() {
        System.out.println("Enter student id: ");
        id = sc.nextInt();

        System.out.println("Enter Student name: ");
        name = sc.next();
    }

    public void dispData() {
        System.out.println("Student ID: " + id);
        System.out.println("Student name: " + name);
    }

    public void getExamData() {
        System.out.println("Enter Exam name: ");
        examName = sc.next();

        System.out.println("Enter exam Type(1st sess, 2nd sess, cec): ");
        examType = sc.next();

        for (int i = 0; i < 5; i++) {
            System.out.println("Enter marks of subject " + (i + 1) + ": ");
            marks[i] = sc.nextInt();
        }
    }

    public void dispExamData() {
        System.out.println("Exam name is: " + examName);
        System.out.println("Exam Type is: " + examType);
        int totalMarks = 0;
        for (int i = 0; i < marks.length; i++) {
            totalMarks += marks[i];
        }
        System.out.println("Total marks are: " + totalMarks);
        System.out.println("average marks is: " + (totalMarks / (double) marks.length));
    }
}

public class code {
    public static void main(String[] args) {
        Result r = new Result();
        r.getData();
        r.getExamData();

        r.dispData();
        r.dispExamData();
    }
}

