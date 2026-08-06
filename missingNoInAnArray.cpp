class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int x=(n*(n+1))/2;
        int total=0;
        for(auto i:nums){
            total+=i;
        }
        return x-total;
    }
};
