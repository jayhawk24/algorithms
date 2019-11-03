import java.util.*;
public class binsh{
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int size = 10;
        int[] nums= new int[size];

        for(int i=0;i<10;i++){
            nums[i]=in.nextInt();
        }
        int find = in.nextInt();
        System.out.println(search(nums,size,find));
    }
    public static int search(int arr[],int n,int key){
        int l=1;
        int h=n;
        while(l<=h){
            int mid = (l+h)/2;
            if(arr[mid]==key){
                return mid+1;
            }
            if(key<arr[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }return 0;
    }
}