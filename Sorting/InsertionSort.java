import java.io.*;
import java.util.*;

public class InsertionSort {

    public static void main(String[] args) throws IOException {
        BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter the size of array: ");
        int n=Integer.parseInt(br.readLine());
        int[] arr = new int[n];
        System.out.println("Enter the elements: ");
        for(int i=0;i<n;i++){
            arr[i]=Integer.parseInt(br.readLine());
        }
        System.out.println("The given Array is: "+ Arrays.toString(arr));
        insertionSort(arr);
        System.out.println("The sorted Array is: "+ Arrays.toString(arr));
    }

    static void insertionSort(int[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i+1; j > 0; j--) {
                if (arr[j] < arr[j-1]) {
                    swap(arr, j, j-1);
                } else {
                    break;
                }
            }
        }
    }
    static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
