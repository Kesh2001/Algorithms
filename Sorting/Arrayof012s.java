
package recursion;


public class Arrayof012s {

    public static int[] sortedarray(int arr[]){
        
        int low=0;
        int high=arr.length-1;
        int mid=0;
        
        while(mid<=high){
            
            if(arr[mid]==0){
                swap(arr,low,mid);
                low++;
                mid++;
            }
            
            if(arr[mid]==1){
                mid++;
            }
            
            if(arr[mid]==2){
                
                swap(arr,mid,high);
                high--;
            }
        }
        return arr;
    }
    
    public static void swap(int arr[],int i,int j){
        
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
  
    public static void main(String[] args) {
        // TODO code application logic here
        
        int arr[]={2,0,1,0,1,2,2,2};
        
        int result[]=sortedarray(arr);
        
        for(int i:result){
            System.out.println(i);
        }
        
        
    }
    
}
