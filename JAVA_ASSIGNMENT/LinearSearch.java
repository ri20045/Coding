import java.util.*;
class LinearSearch {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = sc.nextInt();
        int [] num = new int[n];
        System.out.println("Enter elements of an array: ");
        for (int i=0; i<n; i++) {
            num[i] = sc.nextInt();
        }
        System.out.println("Enter target: ");
        int target = sc.nextInt();
        // int[] num = {1,5,6,78,-1,43,0};
        int ans = linearSearch(num, target);
        System.out.println("target is at index: " + ans);
    }
    static int linearSearch(int[] arr, int key) {
        if (arr.length == 0) {
            return -1;
        }

        for (int index = 0; index < arr.length; index++) {
            int element = arr[index];
            if (element == key) {
                return index;
            }
        }
        return -1;
    }
}
