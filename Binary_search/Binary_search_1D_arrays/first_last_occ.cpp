#include<bits/stdc++.h>
using namespace std;
// arr=[1 3 4 5 5 5 6] first of 5 =3  and last of 5=5
int first(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size()-1;
    int first=-1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid] > target)
            high=mid-1;
        else if(nums[mid] < target)
            low = mid+1;
        
    }
    return first;
}



int last(vector<int> &nums, int target){
    int low = 0;
    int high = nums.size()-1;
    int last=-1;

    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid] > target)
            high=mid-1;
        else if(nums[mid] < target)
            low = mid+1;
        
    }
    return last;
}



int main(){
    vector<int> nums = {1,4,4,5,5,5,6};
    int target = 4;
    int a=last(nums,target);
    // int c = first(nums, target);
    cout <<a <<endl;
}