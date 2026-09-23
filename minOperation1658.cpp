class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int l=0,r=0,maxLength=0;
        int target=0;
        for(auto s: nums){
        target+=s;
        }

        target-=x;
        if(target==0) return nums.size();
        int sum=0;
        while(l <= r && r < nums.size()){
           if(nums[l]>target){
            l++;
            r++;
            continue;
           }
        sum+=nums[r];
        if(sum==target){
            maxLength=max(r-l+1,maxLength);
            sum-=nums[l];
            l++;
            r++;
        }
        else if(sum> target){
            sum-=nums[l]+nums[r];
            l++;
        }
        else r++;
        }
        return maxLength!=0?nums.size()-maxLength:-1;
    }
};
