#include<bits/stdc++.h>
using namespace std;

// lower bound is the number that is smallestnumber>=x in an sorted array arr[]={1 3 4 6 8 11 14} x=5 ans= 6
int lower(vector<int>&nums,int x){
    int low=0;
    int ans=INT_MAX;
    int high =nums.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>=x){
            ans=nums[mid];
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main(){
    vector<int> nums={2,4,5,6,8,10};
    int x=7;
    int ans=lower(nums,x);
   cout<<ans;
}








