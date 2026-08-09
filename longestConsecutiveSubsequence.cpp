class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
      unordered_set<int>st;
      for(auto i:arr){
         st.insert(i);
      }
      int maxx=0;
      for(auto x:arr){
          if(st.find(x-1)==st.end()){
              int curr=x;
              int length=1;
              while(st.find(curr+1)!=st.end()){
                  curr++;
                  length++;
              }  
              maxx=max(maxx,length);

          }
      }
      return maxx;
    }
};
