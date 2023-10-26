import java.util.*;
/*Write a program that makes 3 threads. 
thread 1 prints details of imca
thread 2 prints details of imscit
thread 1 should details of bca*/
class ImcaThread extends Thread{
    public void run(){
        System.out.println("Details of imca");
    }
}
class ImscitThread extends Thread{
    public void run(){
        System.out.println("Details of imscit");
    }
}
class BcaThread extends Thread{
    public void run(){
        System.out.println("Details of bca");
    }
}
public class code{
    public static void main(String[] args) {
        ImcaThread imca = new ImcaThread();
        ImscitThread imscit = new ImscitThread();
        BcaThread bca = new BcaThread();

        imca.start();
        try{
            imca.join();
        }
        catch(InterruptedException e){
        }
        imscit.start();
        try{
            imscit.join();
        }
        catch(InterruptedException e){
        }
        bca.start();
    }
}
