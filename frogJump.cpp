#include<bits/stdc++.h>
using namespace std;
int sum=0;
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
     cout<<frogJump(5,arr);
    return 0;
}
