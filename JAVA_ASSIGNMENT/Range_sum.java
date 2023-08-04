import java.util.*;
// Define an integer array. Take size of array from user. Find sum and average of values between given index range. 
// Take index range from user.
// Eg: arr[]={1,2,3,4,5,6,7}
// index range: 2 to 4 (a[2]+a[3]+a[4]) o/p: Sum: 3 + 4 + 5 = 12, 12/3=4
class code{
    public static void main(String[] args){
        int sum = 0;
        double avg;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter elements: ");
        for(int i=0;i<n;i++){
        System.out.println("arr["+i+"]: ");
        arr[i] = sc.nextInt();
        }
        for(int i=0;i<n;i++){
            System.out.println(arr[i]+" ");
        }
        System.out.println("Enter Range1: ");
        int range1 = sc.nextInt();
        System.out.println("Enter Range2: ");
        int range2 = sc.nextInt();
        for(int i=range1;i<=range2;i++){
            sum += arr[i];
        }
        avg = sum/(range2-range1+1);
        System.out.println("The sum is: "+sum);
        System.out.println("The Average is: "+avg);
    }
}
