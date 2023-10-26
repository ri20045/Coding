import java.util.*;
/*Write a program that makes 2 threads.
thread 1 prints table of 5
thread 2 prints table of 10
thread 1 should finish the work before thread 2 is started
Que 3:*/
class Print5 implements Runnable{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println("5 X "+i+" = "+(5*i));
        }
    }
}
class Print10 implements Runnable{
    public void run(){
        for(int i=1;i<=10;i++){
            System.out.println("10 X "+i+" = "+(10*i));
        }
    }
}
class code{
    public static void main(String[] args) {
        Print5 p5 = new Print5();
        Print10 p10 = new Print10();

        Thread thread1 = new Thread(p5);
        Thread thread2 = new Thread(p10);

        thread1.start();
        try{
            thread1.join();
        }
        catch(InterruptedException e){}
        thread2.start();
    }
}
