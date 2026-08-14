class Solution {
public: 
    vector<vector<int>> ans;
    void sum(int i,vector<int>&dp,int arr[],int s,int n,int k){
        if(dp.size()==k){
            if(s==n){
                ans.push_back(dp);
            }
            return ;
        }
        if(i>=9) return;

        if(s+arr[i]<=n){
            dp.push_back(arr[i]);
            sum(i+1,dp,arr,s+arr[i],n,k);
            dp.pop_back();
        }
        sum(i+1,dp,arr,s,n,k);        
            }
    vector<vector<int>> combinationSum3(int k, int n) {
        int arr[]={1,2,3,4,5,6,7,8,9};
        vector<int>dp;
        sum(0,dp,arr,0,n,k);
        return ans;
    }
};
