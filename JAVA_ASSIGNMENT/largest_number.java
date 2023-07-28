import java.util.*;
//16. Write a Java program to find largest number from an array.
class code{
    public static void main(String[] args){
        int[] arr = {2,3,5,67,8};
        int largest = arr[0];
        for(int i = 1;i < arr.length;i++){
            if(arr[i] > largest){
                largest = arr[i];
            }
        }
        System.out.println("Largest number is: "+largest);
    } 
}
