class Solution {
  public:
    int binSearch(vector<int>& arr, int k , int right,int left){
        int mid=(left+right)/2;
        if(right<left) return 0;
        if(arr[mid]==k) return 1;
        if(arr[mid]>k) return binSearch(arr,k,mid-1,left);
        if(arr[mid]<k) return binSearch(arr,k,right,mid+1);
    }
    bool binarySearch(vector<int>& arr, int k) {
       return binSearch(arr,k,arr.size()-1,0);
        
    }
};
