class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return ;
        int z=0;
        int n=1;
        while(n<nums.size()){
            while(nums[z]!=0){
               z++;
                if(z==nums.size()) return;}
            if(z>n) n=z;
            if(nums[n]!=0){
                int temp=nums[z];
                nums[z]=nums[n];
                nums[n]=temp;
                z++;
            }
            n++;
        }
    }
};
