class Solution {
    public int[] rearrangeArray(int[] nums) {
        int n = nums.length;
        int[] li = new int[n];
        int posIndex = 0, negIndex = 1;
        for (int i=0; i<n; i++) {
            if (nums[i] < 0) {
                li[negIndex] = nums[i];
                negIndex += 2;
            } else {
                li[posIndex] = nums[i];
                posIndex += 2;
            }
        }
        return li;
    }
}
