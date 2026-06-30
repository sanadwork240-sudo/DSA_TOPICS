#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int daysRequired(vector<int>& weights, int cap)
{
    int days = 1;
    int load = 0;

    for(int i = 0; i < weights.size(); i++)
    {
        if(load + weights[i] > cap)
        {
            days++;
            load = weights[i];
        }
        else
        {
            load += weights[i];
        }
    }

    return days;
}


// BRUTE FORCE

// Time : O(N × (sum - max + 1))
// Space: O(1)

// int shipWithinDaysBrute(vector<int>& weights, int days)
// {
//     int low = *max_element(weights.begin(), weights.end());
//     int high = accumulate(weights.begin(), weights.end(), 0);

//     for(int cap = low; cap <= high; cap++)
//     {
//         if(daysRequired(weights, cap) <= days)
//             return cap;
//     }

//     return -1;
// }


int shipWithinDays(vector<int>& weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(daysRequired(weights, mid) <= days)
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
