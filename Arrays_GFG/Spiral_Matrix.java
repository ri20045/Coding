class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        int n = matrix.length;//row
        int m = matrix[0].length;//column
        int left = 0; int right = m-1;
        int top = 0; int bottom = n-1;
        List<Integer> ans = new ArrayList<>();

        while (top <= bottom && left <= right) {
            //left to right 
        for (int i=left; i<= right; i++) {
            ans.add(matrix[top][i]);
        }
        top++;

        //right to bottom
        for (int i=top; i<=bottom; i++) {
            ans.add(matrix[i][right]);
        }
        right++;
        
        //right to left
        if (top <= bottom) {
            for (int i=right; i>=left; i--) {
            ans.add(matrix[bottom][i]);
            }
            bottom--;
        }

        //bottom to top
        if (left <= right) {
            for (int i=bottom; i>=top; i--) {
            ans.add(matrix[i][left]);
            }
            left++;
        }
        }
        
        return ans;
    }
}
