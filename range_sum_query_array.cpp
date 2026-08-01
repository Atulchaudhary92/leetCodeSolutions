class NumArray {
    vector<int>prefix;
public:
    NumArray(vector<int>& nums) {
        prefix.resize(nums.size(),0);
        prefix[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prefix[i]=nums[i]+prefix[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        int result=0;
        if(left==0){ result=prefix[right];
        }
        else {
           result=prefix[right]-prefix[left-1];
        }
        return result;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
