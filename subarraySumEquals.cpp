class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Max=0,smax=0;
        for(int a:nums){           
            if(a==0) smax=0;
            else smax++;
             Max=max(Max,smax);
        }
        return Max;
        
    }
};
