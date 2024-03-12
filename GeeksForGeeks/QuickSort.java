import java.util.*;

public class QuickSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: \n");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements of array: \n");
        for(int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        sort(arr, 0, n-1);
        for(int i=0; i<n; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void sort(int[] nums, int low, int high)
    {
        if (low >= high) {
            return;
        }
        int s = low;
        int e = high;
        int m = (s + e) / 2;
        int pivot = nums[m];

        while (s <= e) {
            while (nums[s] < pivot) {
                s++;
            }
            while (nums[e] > pivot) {
                e--;
            }
            if (s <= e) {
                int temp = nums[s];
                nums[s] = nums[e];
                nums[e] = temp;
                s++;
                e--;
            }
        }
        //now my pivot is at correct position need to sort two halves
        //(low, s) and (e , high)
        sort(nums, low, e);
        sort(nums, s, high);
    }
}
