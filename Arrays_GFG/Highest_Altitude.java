class Solution {
    public int largestAltitude(int[] gain) {
        int n = gain.length;
        int leftSum[] = new int[n+1];
        leftSum[0] = 0;
        leftSum[1] = gain[0];

        int highestAltitude = Integer. MIN_VALUE;

        for (int i=2; i<=n; i++) {
           leftSum[i] = leftSum[i-1] + gain[i-1];
        }
        for (int i=0; i<leftSum.length; i++) {
            if (leftSum[i] > highestAltitude) highestAltitude = leftSum[i];
        }
        return highestAltitude;
    }
}
