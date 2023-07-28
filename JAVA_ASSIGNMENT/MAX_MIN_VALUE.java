import java.util.*;
// 27. Write a java code to find Min- Max value from Array using user defined function.
class code{
    public static void main(String[] args){
        int[] arr = {2,4,5,6,1,3};
        
        int maxValue = max(arr);
        int minValue = min(arr);
        System.out.println("Max value is: "+maxValue);
        System.out.println("Min value is: "+minValue);
    }
    public static int max(int[] a){
        int largest = a[0];
        for(int num:a){
            if(num > largest){
                largest = num;
            }
        }
        return largest;
    }
    public static int min(int[] a){
        int smallest = a[0];
        for(int num:a){
            if(num < smallest){
                smallest = num;
            }
        }
        return smallest;
    }
}
