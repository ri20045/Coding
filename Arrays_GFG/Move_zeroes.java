class Solution {
    public void moveZeroes(int[] nums) {
        //In step 1 find the first zero and store in variable j.
        int j = -1;
        int n = nums.length;
        for (int i=0; i<n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        //no non-zero elements
        if (j == -1) return;

        for (int i=j+1; i<n; i++) {
            if (nums[i] != 0) {
                //swap nums[i] and nums[j]
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;

                j++;
            }
        }
    }
}
