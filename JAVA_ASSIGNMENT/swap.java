import java.util.*;
class pane{
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter value1: ");
    int value1 = sc.nextInt();
    System.out.println("Enter value2: ");
    int value2 = sc.nextInt();
    System.out.println("BEFORE SWAP");
    System.out.println("Value1: "+value1+"\nvalue2: "+value2);
    System.out.println("AFTER SWAP");
    int temp = value1;
    value1 = value2;
    value2 = temp;
    System.out.println("Value1: "+value1+"\nvalue2: "+value2);
    }
}
