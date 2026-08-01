class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
         total+=nums[i];
        }
        int left=0;
        for(int i=0;i<nums.size();i++){
            if(i!=0)
            left+=nums[i-1];
            int right=total-left-nums[i];
            if(right==left) return i;

        }
        return -1;
    }
};
