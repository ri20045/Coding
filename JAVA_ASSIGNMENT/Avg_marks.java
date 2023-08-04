import java.util.*;
// 1.Declare class that takes student personal data and 
// result data (as name, enrolment number, data of birth, semester, subject, internal marks, external marks)
// get student data and display result of student as (average of internal marks & external marks)
class data{
    private String name;
    private int enrollmentNum;
    private int dob;
    private int semester;
    private String subject;
    private double internalMarks;
    private double externalMarks;

    public data(String name,int enrollmentNum,int dob,int semester,String subject,double internalMarks,double externalMarks){
        this.name = name;
        this.enrollmentNum = enrollmentNum;
        this.dob = dob;
        this.semester = semester;
        this.subject = subject;
        this.internalMarks = internalMarks;
        this.externalMarks = externalMarks;
    }
    public void display(){
        System.out.println("Name: "+name);
        System.out.println("Enrollment Number: "+enrollmentNum);
        System.out.println("DOB: "+dob);
        System.out.println("Semester: "+semester);
        System.out.println("Subject: "+subject);
        System.out.println("Internal Marks: "+internalMarks);
        System.out.println("External Marks: "+externalMarks);
    }
    public double calAvg(){
        return (internalMarks+externalMarks)/2;
    }
}
class code{
    public static void main(String[]args){
        Scanner sc = new Scanner(System.in);

        data[] d = new data[3];

        for(int i = 0; i < 3; i++){
            System.out.println("Enter Student details "+(i+1));
            System.out.print("Enter name: ");
            String name = sc.next();
            System.out.println();
            System.out.print("Enter Enrollment Number: ");
            int enrollmentNum = sc.nextInt();
            System.out.println();
            System.out.print("Enter DOB: ");
            int dob = sc.nextInt();
            System.out.println();
            System.out.print("Enter semester: ");
            int semester = sc.nextInt();
            System.out.println();
            System.out.print("Enter Subject: ");
            String subject = sc.next();
            System.out.println();
            System.out.print("Enter InternalMarks: ");
            int internalMarks = sc.nextInt();
            System.out.println();
            System.out.print("Enter externalMarks: ");
            int externalMarks = sc.nextInt();
            System.out.println();
            d[i] = new data(name,enrollmentNum,dob,semester,subject,internalMarks,externalMarks);
       }
            System.out.println("\nDISPLAY DETAILS");
            for(int i = 0;i<3;i++){
                System.out.println("\nStudent " + (i + 1) + ":");
                d[i].display();
                System.out.println("Average marks: "+d[i].calAvg());
            }
    }
}
