import java.util.*;
class code{
    public static void sortAscending(int[] arr){
        int n = arr.length;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    public static void sortDescending(int[] arr){
        int n = arr.length;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j] < arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int size = sc.nextInt();
        int[] array = new int[size];
        System.out.print("Enter elements: ");
        for(int i=0;i<size;i++){
            array[i] = sc.nextInt();
        }
        System.out.println("1-Ascending 2-Descending");
        int choice = sc.nextInt();
        if(choice == 1){
           sortAscending(array);
           System.out.print("Ascending order of array is ");
           for(int num : array){
            System.out.print(num+" ");
           }
        }
        else if(choice == 2){
            sortDescending(array);
            System.out.print("Descending order of array is ");
            for(int num : array){
                System.out.print(num+" ");
               }
        }
        else{
            System.out.println("INVALID CHOICE");
        }

    }
}
