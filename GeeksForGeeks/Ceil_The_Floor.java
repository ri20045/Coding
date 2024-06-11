import java.util.* ;
import java.io.*; 

public class Solution {
    public static int[] getFloorAndCeil(int[] a, int n, int x) {
      // Write your code here.

      int floor = -1;
      int ceil = -1;

      int start = 0;
      int end = n-1;
      
      //determining floor
      while (start <= end)
      {
        int mid = (start + end) / 2;
        if (a[mid] == x)
        {
          floor = a[mid];
          break;
        } else if (a[mid] < x) {
          floor = a[mid];
          start = mid + 1;
        } else {
          end = mid -1;
        }
      }

      //determining ceil => restarting
      start = 0;
      end = n-1;

      while (start <= end)
      {
        int mid = (start + end) / 2;
        if (a[mid] == x)
        {
          ceil = a[mid];
          break;
        } else if (a[mid] < x) {
          start = mid + 1;
        } else {
          ceil = a[mid];
          end = mid -1;
        }
      }

      return new int[] {floor, ceil};
    }
}
