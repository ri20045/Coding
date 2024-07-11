class Solution {
    public void nextPermutation(int[] nums) {
        //find the dip point
        int n = nums.length;
        int index = -1;
        for (int i=n-2; i>=0; i--) {
            if (nums[i] < nums[i+1]) {
                index = i;
                break;
            }
        }
        if (index == -1) {
           // Reverse the entire array
            reverse(nums, 0, n - 1);
            return;
        }
        //find greater element than nums[i] but smaller among the remaining
        for (int i=n-1; i>=index; i--) {
            if (nums[i] > nums[index]) {
                //swap
                int temp = nums[i];
                nums[i] = nums[index];
                nums[index] = temp;

                break;
            }
        }
        //reverse the remaining array => index+1 to n-1
        reverse(nums, index+1, n-1);
    }
    private void reverse (int[]nums, int start, int end) {
        while (start < end) {
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
}
