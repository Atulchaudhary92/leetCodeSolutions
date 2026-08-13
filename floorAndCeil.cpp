class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &nums) {
        vector<int>ans;
        int flor=INT_MIN;
        int cel=INT_MAX;
        for(int i=0;i<nums.size();i++){
           if(nums[i]<=x){
               flor=max(flor,nums[i]);
           }
            if(nums[i]>=x){
               cel=min(nums[i],cel);
           }
            
        }
        if(flor==INT_MIN){
            ans.push_back(-1);
        }
        else ans.push_back(flor);
         if(cel==INT_MAX){
            ans.push_back(-1);
        }
        else ans.push_back(cel);
        return ans;
       
    }
};
