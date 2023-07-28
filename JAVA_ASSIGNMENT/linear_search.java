import java.util.*;
//15. Write a Java program to search an element in an array.
class code{
    public static void main(String[] args){
        int [] array = {2,3,4,56,4};
        int n = array.length;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the element that has to be searched: ");
        int value = sc.nextInt();
        boolean found = false;
        for(int i = 0;i<n;i++){
            if(value == array[i]){
                found = true;
                break;
            }
        }
        if(found){
            System.out.println("Element found");
        }else{
            System.out.println("Element not found");
        }
    } 
}
