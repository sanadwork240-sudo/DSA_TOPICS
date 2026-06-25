#include<bits/stdc++.h>
using namespace std;
// arr[]=[7 8 8 9 0 3 4] x=3 contain duplicates 
int rotataedarr(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size()-1;

    while(low <= high){
        int mid = low + (high-low)/2;

        if (nums[mid]==target)return mid;
        if (nums[low]==nums[mid]&& nums[high]==nums[mid]){
            low=low+1;
            high=high-1;
            continue;
        }
        else if(nums[low]<=nums[mid]){
            if(nums[low]<target&& target<nums[mid]) high=mid-1;
        
            else low=mid+1;}

        else{
            if(target>nums[mid]&&target<nums[high]) low=mid+1;
            else high=mid-1;
        }
    } return -1;




}

int main(){
    vector<int> nums = {1,4,4,4,5,6,6,6,6};
    int target = 5;

    int c = rotataedarr(nums, target);
    cout << c;
}