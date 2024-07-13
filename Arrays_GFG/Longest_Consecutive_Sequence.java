class Solution {
    public int longestConsecutive(int[] nums) {
        int n = nums.length;
        int longest = 1;
        if (n == 0) return 0;
        Set<Integer> set = new HashSet<>();
        for (int i=0; i<n; i++) {
            set.add(nums[i]);
        }
        for (int it : set) {
            if (!set.contains(it-1)) {
                int count = 1;
                int smallest = it;
                while (set.contains(smallest+1)) {
                    smallest = smallest + 1;
                    count = count+1;
                }
                longest = Math.max(longest, count);
            }
        }
        return longest;
    }
}
