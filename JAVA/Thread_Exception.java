class MyThread1 extends Thread {
   public void run() {
       try {
           for (int i = 1; i <= 10; i++) {
               System.out.println("Thread 1: " + i);
               Thread.sleep(100); // Sleep for a short time to simulate work
           }
       } catch (InterruptedException e) {
           System.out.println("Thread 1 interrupted.");
       }
   }
}

class MyThread2 extends Thread {
   public void run() {
       try {
           for (int i = 11; i <= 20; i++) {
               System.out.println("Thread 2: " + i);
               Thread.sleep(100); // Sleep for a short time to simulate work
           }
       } catch (InterruptedException e) {
           System.out.println("Thread 2 interrupted.");
       }
   }
}

public class code {
   public static void main(String[] args) {
       MyThread1 thread1 = new MyThread1();
       MyThread2 thread2 = new MyThread2();

       thread1.start();
       thread2.start();
   }
}
