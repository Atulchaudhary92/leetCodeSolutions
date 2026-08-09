class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums;
        int cand1=0;
        int cand2=0;
        int count1=0;
        int count2=0;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(cand1==nums[i]) count1++;
            else if(cand2==nums[i]) count2++;
            else if(count1==0){
                cand1=nums[i];
                count1=1;
            }
            else if(count2==0){
                cand2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }}

              // Phase 2: Count actual occurrences
        count1 = 0;
        count2 = 0;

        for (int num : nums) {
            if (num == cand1)
                count1++;

            if (num == cand2)
                count2++;
        }
            int n=nums.size()/3;
            if(count1>n) ans.push_back(cand1);
            if(count2>n && cand1!=cand2) ans.push_back(cand2);
        return ans;
            }
};
