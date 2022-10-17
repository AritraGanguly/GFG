class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int l=0;
        int h=n-1;
        int mid=0;
        while(l<=h)
        {
            mid=(l+h)/2;
            if(arr[mid]==k)
            return mid;
            else if(k>arr[mid])
            l=mid+1;
            else
            h=mid-1;
        }
        return -1;
        
    }
};
