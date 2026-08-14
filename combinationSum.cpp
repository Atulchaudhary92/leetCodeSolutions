class Solution {
public:
    vector<vector<int>>ans;
    void count(int i,vector<int>&dp,vector<int>&arr,int s,int sum,int n){
        if(i==n){
            if(s==sum){
                ans.push_back(dp);
                return ;
            }
        return ;
        }
        if(s+arr[i]<=sum){
            dp.push_back(arr[i]);
            count(i,dp,arr,s+arr[i],sum,n);
            dp.pop_back();
        }
        
        count(i+1,dp,arr,s,sum,n);
    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>dp;
         count(0,dp,candidates,0,target,candidates.size());
         return ans;
    }
};
