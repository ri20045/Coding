import java.util.*;
class MergeSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: \n");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements of array: \n");
        for(int i=0; i<n; i++) {
            arr[i] = sc.nextInt();
        }
        mergeSort(arr, 0, n);
        for(int i=0; i<n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
    static void mergeSort(int[] arr, int s, int e) 
    {
        if (e -s == 1) {
            return;
        }
        int mid = (s + e) / 2;
        mergeSort(arr, s, mid);
        mergeSort(arr, mid, e);

        merge(arr, s, mid, e);
    }

    private static void merge (int[] arr, int s, int m, int e)
    {
        int[] mix = new int[e - s];
        int i = s;
        int j = m;
        int k = 0;

        while (i < m && j < e) {
            if (arr[i] < arr[j]) 
            {
                mix[k] = arr[i];
                i++;
            }
            else {
                mix[k] = arr[j];
                j++;
            }
            k++;
        }

        //copy the remaining elements
        while (i < m) {
            mix[k] = arr[i];
            i++;
            k++;
        }
        while (j < e) {
            mix[k] = arr[j];
            j++;
            k++;
        }

        for (int l = 0; l < mix.length; l++) {
            arr[s + l] = mix[l];
        }
    }
}
