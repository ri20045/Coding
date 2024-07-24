class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        //sort the entire array
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        for (int i=0; i<n; i++) {
            if (i>0 && nums[i] == nums[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while (j < k) {
                int sum = nums[i] + nums[k] + nums[j];
                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                } else {
                    //the sum is equal to 0 store all elements
                    List<Integer> list = Arrays.asList(nums[i], nums[j], nums[k]);
                    ans.add(list);
                    j++;
                    k--;
                    while (j < k && nums[j] == nums[j-1]) j++;
                    while (j < k && nums[k] == nums[k+1]) k--;
                }
            }
        }
        
        return ans;
    }
}
