import java.util.*;

public class InsertionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = sc.nextInt();
        int[] num = new int[n];
        System.out.println("Enter elements: ");
        for (int i=0; i<n; i++) {
            num[i] = sc.nextInt();
        }
        insertionSort(num);
    }

    static void insertionSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j > 0; j--) {
                if (arr[j] < arr[j - 1]) {
                    //swap
                    int temp = arr[j-1];
                    arr[j-1] = arr[j];
                    arr[j] = temp;
                } else {
                    break;
                }
            }
        }
        for (int i= 0; i<arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    } 
}
