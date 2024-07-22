class Solution {
    public List<Integer> majorityElement(int[] nums) {
        int ele1 = Integer.MIN_VALUE;
        int ele2 = Integer.MIN_VALUE;
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i=0; i<nums.length; i++) {
            if (cnt1 == 0 && ele2 != nums[i]) {
                cnt1 = 1;
                ele1 = nums[i];
            }
            else if (cnt2 == 0 && ele1 != nums[i]) {
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if (nums[i] == ele1) cnt1++;
            else if (nums[i] == ele2) cnt2++;
            else {
                cnt1--; cnt2--;
            }
        }
        List<Integer> list = new ArrayList<Integer>();
        //manually check
        int n = nums.length;
        cnt1 = 0; cnt2 = 0;
        for (int i=0; i<nums.length; i++) {
            if (ele1 == nums[i]) cnt1++;
            if (ele2 == nums[i]) cnt2++;
        }
        int min = (int)(n/3) + 1;
        if (cnt1 >= min) list.add(ele1);
        if (cnt2 >= min) list.add(ele2);
        Collections.sort(list); 
        return list;
    }
}
