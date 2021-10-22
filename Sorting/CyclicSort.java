import java.io.*;
import java.util.*;

public class CyclicSort {
    public static void main(String[] args) throwws IOException {
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

    static void sort(int[] arr) {
        int i = 0;
        while (i < arr.length) {
            int correct = arr[i] - 1;
            if (arr[i] != arr[correct]) {
                swap(arr, i , correct);
            } else {
                i++;
            }
        }
    }

    static void swap(int[] arr, int first, int second) {
        int temp = arr[first];
        arr[first] = arr[second];
        arr[second] = temp;
    }
}
