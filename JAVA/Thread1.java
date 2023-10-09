import java.util.*;
// Write a program that makes 1 thread. print id of thread
// set and display following: name of thread
// priority of thread
class MyThread extends Thread{
   public void run(){
      System.out.println("Id of thread: "+getId());
      System.out.println("Thread Name: " + getName());
      System.out.println("Thread Priority: " + getPriority());
   }
}
class code{
   public static void main(String[] args) {
      MyThread t1 = new MyThread();
      t1.setName("MyThread");
      t1.setPriority(t1.MIN_PRIORITY);
      t1.start();
   }
}
