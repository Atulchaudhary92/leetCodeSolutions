class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
    vector<int>ans;
    int maxx=arr[arr.size()-1];
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]>=maxx){
            ans.push_back(maxx);
            maxx=arr[i];
        }
    }
    ans.push_back(maxx);
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
