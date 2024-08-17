class Solution {
    public int pivotInteger(int n) {
        int ans = -1;
        int arr[] = new int[n];
        for (int i=0; i<n; i++) {
            arr[i] = i+1;
        }
        int sumLeft[] = new int[n];
        sumLeft[0] = arr[0];
        for (int i=1; i<n; i++) {
            sumLeft[i] = sumLeft[i-1] + arr[i];
        }
        int sumRight[] = new int[n];
        sumRight[n-1] = arr[n-1];
        for (int i=n-2; i>=0; i--) {
            sumRight[i] = sumRight[i+1] + arr[i];
        }

        for (int i=0; i<n; i++) {
            if (sumLeft[i] == sumRight[i]) {
                ans = arr[i];
            }
        }
        return ans;
    }
}
