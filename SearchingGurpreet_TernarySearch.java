public class TernarySearch {
  
  public static void main(String[] args) {
    
    String[] names = {"Jack", "Gurpreet", "Aditya"};
    int ans = ternarySearch(names, "Aditya", 0, 3);
    System.out.println(ans);
    
     }
     
    public static int ternarySearch(String[] arr, String target, int start, int end) {
        
      if (start < end) {
        int midpoint1 = (end + start) / 3;
        int midpoint2 = start + 2 * (end - start) / 3;
        if (target.compareTo(arr[midpoint1]) == 0) {
            return midpoint1;
        } else if (target.compareTo(arr[midpoint2]) == 0) {
            return midpoint2;
        } else if (arr[midpoint1].compareTo(arr[midpoint2]) < 0) {
            return ternarySearch(arr, target, midpoint1, end);
        } else {
            return ternarySearch(arr, target, start, midpoint2);
        }
    }
    return -1;
    }
}
