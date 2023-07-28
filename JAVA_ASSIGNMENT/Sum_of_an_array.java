import java.util.*;
//Write a Java program to display sum of all the elements of array.
class code{
    public static void main(String[] args){
       int[] array = {1,2,3,4,5};
        int sum = 0;
        int n = array.length;
        for(int i = 0;i < n;i++){
            sum = sum + array[i];
        }
        System.out.println("Sum: "+sum);
    } 
}
