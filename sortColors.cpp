class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int n=nums.size()-1;
        while(i<n){
            if(nums[n]==2) n--;
            else if(nums[i]==2) {swap(nums[i],nums[n]);n--;}
            else
            i++;
        }
        int j=0;
        while(j<i){
            if(nums[i]==1) i--;
            else if(nums[j]==1) {swap(nums[i],nums[j]);i--;}
            else
            j++;
        }
    }
};
