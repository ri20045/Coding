class Solution {
    public int pivotIndex(int[] nums) {
        int n = nums.length;
        int total = 0;
        for (int i=0; i<n; i++) {
            total += nums[i];
        }
        int leftSum = 0;
        for (int i=0; i<n; i++) {
            if (leftSum == total - leftSum - nums[i]) return i;
             leftSum += nums[i];
        }
        return -1;
    }
}
