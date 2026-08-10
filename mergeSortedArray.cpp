class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0) return;
        if(m==0){
            nums1=nums2;
            return;
        }
       int i=m+n-1;
      for(i ; i >= 0 ; i--){
              if(nums1[m-1]>=nums2[n-1]) {
                nums1[i]=nums1[m-1];
                m--;
                if(m==0){
                    while(n!=0){
                        i--;
                        nums1[i]=nums2[n-1]; n--;
                        
                    }
                    return;
                }
              }
              else {
                nums1[i]=nums2[n-1];
                n--;
                if(n==0) return;
              }
       }
    }
};
