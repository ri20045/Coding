class Solution {
    public int findMin(int[] nums) {
        int n = nums.length;
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            if (nums[start] <= nums[end]) {
                return nums[start];
            }
            
            int mid = (start + end) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n -1) % n;

            //minimum element will be smaller than both adjacent elements.
            if (nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            {
                return nums[mid];
            }
            else if (nums[start] <= nums[mid]) {
                start = mid + 1;
            }
            else if (nums[mid] <= nums[end]) {
                end = mid - 1;
            }
        }
        return -1;
    }
}
