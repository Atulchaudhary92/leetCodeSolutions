class Solution {
  public:
    int  houseRobber(int index,vector<int>&arr,int n,vector<int>&dp){
        if(index>=n) return 0;
        if(dp[index]!=-1) return dp[index];
        return dp[index]=max(houseRobber(index+2,arr,n,dp)+arr[index],houseRobber(index+1,arr,n,dp));
    }
    int findMaxSum(vector<int>& arr) {
        vector<int>dp(arr.size()+1,-1);
       return houseRobber(0,arr,arr.size(),dp); 
    }
};
