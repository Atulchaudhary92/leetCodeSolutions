class Solution {
  public:
    int findFloor(vector<int>& nums, int target) {
        if(nums[0]<=target&& nums.size()==1) return 0;
        else if(nums[nums.size()-1]<=target) return nums.size()-1;
        int left=0;
        int right=nums.size()-1;
        while(left<right){
              int mid=left+(right-left)/2;
              if(mid<nums.size()-1&&nums[mid]<=target && nums[mid+1]>target) return mid;
              else if(nums[mid]>target) right=mid;
              else left=mid+1;
        }
        return -1;
        
    }
};
