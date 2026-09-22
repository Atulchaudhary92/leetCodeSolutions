class Solution {
public:
   int recursive(string s,int index,vector<int>&dp,int n){
    if(index==n){return 1;}
    if(s[index]=='0') return 0;
    if(dp[index]!=-1) return dp[index];
    int ways=recursive(s,index+1,dp,n);
    int two=0;
    if(index+1<n)
    two=(s[index]-'0')*10+(s[index+1]-'0');
    if(10<=two && two<=26){
    ways+=recursive(s,index+2,dp,n);
    }
    return dp[index]=ways;
   }
    int numDecodings(string s) {
        if(s[0]=='0') return 0;
int n=s.size();
vector<int>dp(n+1,0);
dp[n]=1;
for(int i=n-1;i>=0;i--){
    if(s[i]=='0') continue;
    dp[i]=dp[i+1];
    int two=0;
    if(i<n-1){
         two=(s[i]-'0')*10+(s[i+1]-'0');
    }
    if(10<=two && two<=26){
        dp[i]+=dp[i+2];
    }

}
return dp[0];

    }
};
