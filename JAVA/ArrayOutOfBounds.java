import java.util.*;
/*Que 2:
Write a program with following consideration:
- Declares an interface Student.
- it has methods to get data and display data.
- Declare an interface Exam
- it has methods to get data and display data.
Create class Result that uses interface to get Data for student 
and display the total and average of marks - 
it has variables id and name (use methods of student interface)
- it has variable name, type(1st sess, 2nd sess, cec), marks[5] (use methods of exam interface) - 
Generate an exception to check array Index out of bound*/

interface Student{
   public void getStudentData();
   public void dispStudentData();
}
interface Exam{
   public void getExamData();
   public void dispExamData();
}
class Result implements Student, Exam{
   int id;
   String name;
   String ExamName;
   String ExamType;
   int total = 0;
   double Average;
   int marks[] = new int[5];

   public void getStudentData(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter student ID: ");
      id = sc.nextInt();
      System.out.println("Enter Student name: ");
      name = sc.next();
   }
   public void dispStudentData(){
      System.out.println("student ID: "+id);
      System.out.println("Student name: "+name);
   }
   public void getExamData(){
      Scanner sc = new Scanner(System.in);
      System.out.println("Enter Exam name: ");
      ExamName = sc.next();
      System.out.println("Enter Exam Type(1st sess, 2nd sess...): ");
      ExamType = sc.next();
      for(int i=0;i<=marks.length;i++){
      try{
      
         System.out.println("Enter marks "+ (i+1)+": ");
         marks[i] = sc.nextInt();
   }
   catch(ArrayIndexOutOfBoundsException e){
      System.out.println("Exception Caught array out of bounds");
      System.exit(0);
   }
}
   }
   public void dispExamData(){
      System.out.println("Exam name is: "+ExamName);
      System.out.println("Exam type is: "+ExamType);
      for(int i=0;i<5;i++){
         System.out.println("Marks "+ (i+1)+": " + marks[i]);
      }
   }
   void Calculate(){
      for(int i=0;i<marks.length;i++){
         total += marks[i];
      }
      System.out.println("Total Marks: "+ total);
      Average = (double)total/marks.length;
      System.out.println("Average marks: "+ Average);
   }
}
class code{
   public static void main(String[] args) {
      Result r = new Result();
      r.getStudentData();
      r.getExamData();

      r.dispStudentData();
      r.dispExamData();
      r.Calculate();
   }
}
