import java.util.*;
//  1. write a program to find sum and difference of smallest and largest elements of array 
 class code{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0;i<n;i++){
            System.out.println("arr["+i+"]: ");
            arr[i] = sc.nextInt();
        }
        int largest = arr[0];
        int smallest = arr[0];
        for(int num:arr){
            if(num > largest){
            largest = num;
            }
        }
        System.out.println("Largest number: "+largest);
        for(int num:arr){
            if(num < smallest){
            smallest = num;
            }
        }
        System.out.println("Smallest number: "+smallest);
        int sum = largest + smallest;
        int diff = largest - smallest;
        System.out.println("Sum: "+sum);
        System.out.println("Diff "+diff);
    }
 }
