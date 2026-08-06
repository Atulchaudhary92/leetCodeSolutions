class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int f=0;
        int s=0;
        vector<int>ans;
        while(f<a.size()&&s<b.size()){
            if(a[f]>b[s]){
                if(ans.empty() || ans.back()!=b[s])
                ans.push_back(b[s++]); 
                else s++;
            }
            else if(a[f]==b[s]) f++;
            
            else {
                if(ans.empty() || ans.back()!=a[f])
                ans.push_back(a[f++]);
                
                else f++;
                 }
        }
        while(f<a.size()) {
            if(ans.empty() || ans.back()!=a[f])
                ans.push_back(a[f++]);
                
                else f++;
            
        }
        while(s<b.size()) {
               if(ans.empty() || ans.back()!=b[s])
                ans.push_back(b[s++]); 
                
                else s++;
        }
        return ans;
    }  
};
