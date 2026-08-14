class Solution {
public:
    vector<vector<int>>ans;
    void print(int i,vector<int>nums,vector<int>&dp,int n){
       
        if(i==n)  {ans.push_back(dp);return;}
        dp.push_back(nums[i]);
        print(i+1,nums,dp,n);
        dp.pop_back();
        print(i+1,nums,dp,n);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp;
        print(0,nums,dp,n);
        return ans;
    }
};
