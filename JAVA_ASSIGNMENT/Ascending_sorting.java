import java.util.*;
class code{
    public static void main(String[] args){
        int[] array = {5, 10, 2, 8, 3};
        sortArray(array);
        System.out.println("Sorted array");
        for(int num:array){
            System.out.print(num+" ");
        }
    }
    public static void sortArray(int[] arr){
        int n = arr.length;
        int temp;
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    } 
}
