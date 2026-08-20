#include<bits/stdc++.h>
using namespace std;
int sum=0;
// bottom up approach;
int frogJump(int index, int arr[]){
    if(index<1) return 0;
     int left=frogJump(index-1,arr)+abs(arr[index]-arr[index-1]);
     int right=INT_MAX;
     if(index>=2)
     right=frogJump(index-2,arr)+abs(arr[index]-arr[index-2]);
      
     return min(left,right);
    }
int main(){
    int arr[]={30,10,60,10,60,50};
    int secPrev=0;
    int prev=abs(arr[0]-arr[1]);
    for(int i=2;i<6;i++){
        int left=abs(arr[i]-arr[i-1])+prev;
        int right=INT_MAX;
        if(i>=2)
        right=abs(arr[i]-arr[i-2])+secPrev;
        secPrev=prev;
        prev=min(left,right);        
    }
    cout<<prev;
    return 0;
}
 
