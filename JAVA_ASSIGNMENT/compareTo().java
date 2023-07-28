import java.util.*;
//18. Write a Java Program which will find the position of the asked chatracter.
class code{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter string1 ");
        String s1 = sc.next(); 
        System.out.println("Enter string2 ");
        String s2 = sc.next();
        int comparision = s1.compareTo(s2);
        if(comparision == 0){
            System.out.println("equal");
        }else{
            System.out.println("not equal");
        }
    } 
}
