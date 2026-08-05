class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
      int maxx=-1,sMax=-1;
      for(auto i: arr){
          if(i>sMax&&i<maxx){
              sMax=i;
          }
          if(i>maxx){
              sMax=maxx;
              maxx=i;
          }
      }
      return sMax;
        
    }
};
