class Solution{
    
   
    // Function for finding maximum and value pair
    public static int lenOfLongSubarr (int A[], int N, int K) {
        //Complete the function
        int i=0;
        int j=0;
        int sum = 0;
        int maxLength = 0;
        
        while (j < N)
        {
            sum = sum + A[j];
            if (sum < K)
            {
                j++;
            }
            else if (sum == K)
            {
                    maxLength = Math.max(maxLength, j-i+1);
            }
            else if (sum > K)
            {
                while (sum > K)
                {
                    sum = sum - A[i];
                    maxLength = Math.max(maxLength, j-i+1); 
                    i++;
                }
                j++;
            }
            
        }
        return maxLength;
    }
}


