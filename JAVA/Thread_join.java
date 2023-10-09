import java.util.*;
/*Que 2:
Write a program that makes 3 threads.
thread 1 prints table of 5
thread 2 prints table of 10
thread 1 should finish the work before thread 2 is started */

class MyThread1 extends Thread{
   public void run(){
      for(int i=1;i<=10;i++){
         System.out.println(i+ "X 5 = " + (i*5));
      }
   }
}
class MyThread2 extends Thread{
   public void run(){
      for(int i=1;i<=10;i++){
         System.out.println(i+ "X 10 = " + (i*10));
      }
   }
}
// class MyThread3 extends Thread{
//    public void run(){

//    }
// }
class code{
   public static void main(String[] args) {
      MyThread1 t1 = new MyThread1();
      MyThread2 t2 = new MyThread2();

      t1.start();
      try{
         t1.join(1000);
      }catch(InterruptedException e){
         e.getStackTrace();
      }
      t2.start();
   }
}
