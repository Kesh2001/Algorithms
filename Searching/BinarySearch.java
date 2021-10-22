import java.io.*;
import java.util.*;

public class BinarySearch {
    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter Size of Array: ");
        int n=Integer.parseInt(br.readLine());
        int[] arr=new int[n];
        System.out.println("Enter The Elements: ");
        for(int i=0;i<n;i++){
            arr[i]=Integer.parseInt(br.readLine());
        }
        System.out.print("Enter Target Element: ");
        int target = Integer.parseInt(br.readLine());
        int ans = binarySearch(arr, target);
        System.out.println("The index of target element is: "+ans);
    }

    static int binarySearch(int[] arr, int target) {
        int start = 0;
        int end = arr.length - 1;

        // find whether the array is sorted in ascending or descending
        boolean isAsc = arr[start] < arr[end];

        while(start <= end) {
            // find the middle element
//            int mid = (start + end) / 2; // might be possible that (start + end) exceeds the range of int in java
            int mid = start + (end - start) / 2;

            if (arr[mid] == target) {
                return mid;
            }

            if (isAsc) {
                if (target < arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            } else {
                if (target > arr[mid]) {
                    end = mid - 1;
                } else {
                    start = mid + 1;
                }
            }
        }
        return -1;
    }
}
