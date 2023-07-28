import java.util.*;
//18. Write a Java Program which will find the position of the asked chatracter.
class code{
    public static void main(String[] args){
        String str1 = "GLS UNIVERSITY";
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the character you want index of: ");
        String s = sc.next(); 
        int index = str1.indexOf(s);
        if(index != -1){
            System.out.println(index);
        }else{
            System.out.println("Not present");
        }
    } 
}
