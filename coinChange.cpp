class Solution {
public:
    // int find(vector<int>&coins,int i,int sum,vector<vector<int>>&ds){ 
    //     if(sum==0){
    //         return 0; 
    //     }
    //     if(i<0||sum<0) return INT_MAX-1;
    //     if(ds[i][sum]!=-1) return ds[i][sum];
    //     int take=INT_MAX-1;
    //     if(sum-coins[i]>=0) 
    //     take=1+find(coins,i,sum-coins[i],ds);
    //     int notTake=find(coins,i-1,sum,ds);
    //     return ds[i][sum]=min(take,notTake);
 
    // }
    // tabulation->
    int coinChange(vector<int>& coins, int amount) {
       vector<int>dp(amount+1,1e9);
       dp[0]=0;
       for(int coin:coins){
        for(int target=coin;target<=amount ;target++){
            dp[target]=min(dp[target],1+dp[target-coin]);
        }
       }
       return dp[amount]==1e9?-1:dp[amount];}
};
