class Solution {
    public static List<Integer> findRows (int row) {
        long ans = 1;
        List<Integer> ansRow = new ArrayList<>();
        ansRow.add(1);
        //row generate
        for (int i=1; i<=row; i++) {
            ans = ans * (row-i+1);
            ans = ans / i;
            ansRow.add((int)ans);
        }
        return ansRow;
    }
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<numRows; i++) {
            ans.add(findRows(i));
        }
        return ans;
    }
}
