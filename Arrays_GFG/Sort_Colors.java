lass Solution {
    public void sortColors(int[] nums) {
        int n = nums.length;
        int low = 0, mid = 0, high = n-1;
        while (mid <= high) {
            if (nums[mid] == 0) {
                //swap nums[low] and nums[mid]
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;

                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                //swap nums[high] and nums[mid]
                int temp = nums[high];
                nums[high] = nums[mid];
                nums[mid] = temp;
                
                high--;
            }
        }
    }
}
