import java.util.*;
public class code {
    public static void main(String[] args){
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter string: ");
       String str = sc.next();
       boolean isPallindrome = checkPallindrome(str);
       if(isPallindrome){
        System.out.println("It is pallindrome");
       }
       else{
        System.out.println("It is not pallindrome string");
       }
    }
    public static boolean checkPallindrome(String arr){
        int left = 0;
        int right = arr.length()-1;
        if(arr.charAt(left) == arr.charAt(right)){
            return true;
        }
        return false;
    }
}
