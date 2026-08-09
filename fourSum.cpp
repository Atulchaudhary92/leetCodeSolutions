class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>>ans;
        if(nums.size()<4) return ans;
       
       sort(nums.begin(),nums.end());       
        int sum=0;
       for(int i=0;i<nums.size()-3;i++){
         if(i>0&&nums[i]==nums[i-1]) continue;
        for(int m=i+1;m<nums.size()-2;m++ ){
        if(m>i+1 && nums[m]==nums[m-1]) continue;
        else {
        int j=m+1;
        int k=nums.size()-1;
        while(j<k){
        long long sum=1LL*nums[i]+nums[j]+nums[k]+nums[m];
        if(sum==target) {ans.push_back({nums[i],nums[m],nums[j],nums[k]}); 
         while (j < k && nums[j] == nums[j + 1])
                        j++;

        while (j < k && nums[k] == nums[k - 1])
                        k--;

         j++;
        k--;
        }
        else if(sum<target) j++;
        else if(sum>target){ k--;}
        }}
        }
        }
        return ans;
    }
};
