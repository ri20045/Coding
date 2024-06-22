class Solution {
    public int search(int[] nums, int target) {
        int low = 0;
        int high = nums.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
            return mid;
            }
            else if (nums[mid] < target) {
                //shift right to mid of array
                low = mid + 1;
            }
            else {
              //else shift to the left of array
                high = mid - 1;
            }
        }
        return -1;
        
    }
}
