#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//-----------------------------------------------------
// Function to calculate the sum for a given divisor
//-----------------------------------------------------
int findSum(vector<int>& nums, int divisor)
{
    int sum = 0;

    for(int x : nums)
    {
        sum += ceil((double)x / divisor);
    }

    return sum;
}

/*-----------------------------------------------------

BRUTE FORCE

Time : O(N * MaxElement)
Space: O(1)

int smallestDivisorBrute(vector<int>& nums, int threshold)
{
    int maxi = *max_element(nums.begin(), nums.end());

    for(int d = 1; d <= maxi; d++)
    {
        if(findSum(nums, d) <= threshold)
            return d;
    }

    return -1;
}

------------------------------------------------------*/


//-----------------------------------------------------
// OPTIMAL (Binary Search)
//-----------------------------------------------------
int smallestDivisor(vector<int>& nums, int threshold)
{
    int maxi = *max_element(nums.begin(), nums.end());

    // Impossible case
    if(nums.size() > threshold)
        return -1;

    int low = 1;
    int high = maxi;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(findSum(nums, mid) <= threshold)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return low;
}

int main()
{
    vector<int> nums = {1,2,5,9};

    int threshold = 6;

    // Uncomment to test brute force
    // cout << smallestDivisorBrute(nums, threshold);

    cout << "Smallest Divisor = ";
    cout << smallestDivisor(nums, threshold);

    return 0;
}