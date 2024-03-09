import java.util.*;

public class BinarySearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = sc.nextInt();
        int num[] = new int[n];
        //pass only sorted array
        System.out.println("Enter elements of array: ");
        for (int i = 0; i< n; i++) {
            num[i] = sc.nextInt();
        }
        System.out.println("Search number: ");
        int key = sc.nextInt();
        int ans = binarySearch(num, key);
        System.out.println("Number is at index: " + ans);
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;
        while (start <= end) {
            //find mid of an array
            int mid = (start + end) / 2;
            //more better way to find mid element ...
            // int mid = start + (end - start) / 2;
            if (target > arr[mid]) {
                //shift search to right side of an array
                start = mid + 1;
            }
            else if (target < arr[mid]) {
                //shift search to left side of an array
                end = mid - 1;
            }
            else {
                //target == mid
                return mid;
            }
        }
        return -1;
    }
    
}
