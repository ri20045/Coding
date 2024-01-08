import java.util.*;
// 5. Write a java code to create a Upper and Lower Trianguler matrix using UDF
class TriangularMatrix
{

    static void printUpperTriangular(int[][] matrix, int size) {
        System.out.println("Upper Triangular Matrix:");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                if (i <= j) {
                    System.out.print(matrix[i][j] + " ");
                }
                else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }

    static void printLowerTriangular(int[][] matrix, int size) {
        System.out.println("Lower Triangular Matrix:");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                if (i >= j) {
                    System.out.print(matrix[i][j] + " ");
                }
                else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the matrix: ");
        int size = sc.nextInt();
        int[][] matrix = new int[size][size];
        System.out.println("Enter elements");

        //taking inpur for matrix
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                System.out.print("a[" + i + "][" + j + "]: ");
                matrix[i][j] = sc.nextInt();
            }
        }
        sc.close();
        //displaying matrix
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        printUpperTriangular(matrix, size);
        printLowerTriangular(matrix, size);
    }
}
