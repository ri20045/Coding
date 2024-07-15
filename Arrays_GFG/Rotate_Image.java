class Solution {
    public void rotate(int[][] matrix) {
        //transpose of given matrix
        for (int i=0; i<=matrix.length-2; i++) {
            for (int j=i+1; j<matrix[0].length; j++) {
                swap(matrix, i, j);
            }
        }
        //reverse the matrix
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix.length / 2; j++) {
                int temp = 0;
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][matrix.length - 1 - j];
                matrix[i][matrix.length - 1 - j] = temp;
            }
        }
    }
    public static void swap(int[][] matrix, int i, int j) {
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
    }
}
