class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        if(n==1) return 0;
        int ans=0;
        int prev=cost[0];
        int secPrev=0;
        for(int i=1;i<n;i++){
            ans=cost[i]+min(prev,secPrev);
            secPrev=prev;
            prev=ans;
        }
        return min(prev,secPrev);
    }
};
