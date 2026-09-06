class Solution {
public:
//  solving this using recursion+memoization.
    // int noCoin(int index,vector<int>&coins,int target,vector<vector<int>>&dp){
    //     if(index==coins.size()) return 0;
    //     if(target==0) {return 1;}

    //     if(dp[index][target]!=-1) return dp[index][target];
    //     int take=0;
    //     if(target-coins[index]>=0)
    //     take=noCoin(index,coins,target-coins[index],dp);

    //     int notTake=noCoin(index+1,coins,target,dp);
    //      dp[index][target]= take + notTake;
    //      return dp[index][target];
    // }
//using tabulation in 1D dp array.
    int change(int amount, vector<int>& coins) {
    vector<int>dp(amount+1,0);
dp[0]=1;
    for(int coin:coins){
        for(int target=coin;target<=amount;target++){
            dp[target]+=dp[target-coin];
        }
    }
    return dp[amount];
             
    }
};
