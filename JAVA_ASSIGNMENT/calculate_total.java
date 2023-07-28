import java.util.*;
// 29. Write a java code to get marks of three subjets using constructor and calculate total and percentage.
class code{
    private int m1,m2,m3,total;
    code(int m1,int m2,int m3){
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }
    public void calculateTotal(){
        total = m1 + m2 + m3;
    }
    public void display(){
        System.out.println("Total: "+total);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter marks for Subject 1: ");
        int num1 = sc.nextInt();
        System.out.print("Enter marks for Subject 2: ");
        int num2 = sc.nextInt();
        System.out.print("Enter marks for Subject 3: ");
        int num3 = sc.nextInt();

        code c = new code(num1,num2,num3);
        c.calculateTotal();
        c.display();
    }
}
