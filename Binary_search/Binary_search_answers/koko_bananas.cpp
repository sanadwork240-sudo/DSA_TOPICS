#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int func(vector<int> &nums, int hour){
    int totalh=0;
    for(int i=0;i<nums.size();i++){
       totalh+=ceil((double)nums[i]/hour);
    }
    return totalh;
}
int max_fun(vector<int> &nums){
    int maxi=INT_MIN;
    for (int i =0;i<nums.size();i++){
        if (nums[i]>maxi){
            maxi=nums[i];
        }
    }
    return maxi;
}
int minimumRateToEatBananas(vector<int> &nums, int h) {
//  brute Solution
// int maxu=max_fun(nums);
// for(int i=1;i<=maxu;i++){
//     int k=func(nums,i);
//     if(k<=h){
//         return i;
//     }
    
// }

// optimal solution binary search
int low = 1;
int high = max_fun(nums);
int ans = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        int k = func(nums, mid);

        if(k > h) {
                low = mid + 1;
            }
        else {
                ans = mid;
                high = mid - 1;
            }
        }

        return ans;
    }
