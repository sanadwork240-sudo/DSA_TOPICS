#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Checks if it is possible to make m bouquets in 'days'
bool possible(vector<int> &arr, int days, int m, int k)
{
    int cnt = 0;
    int totalBouquets = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] <= days)
        {
            cnt++;
        }
        else
        {
            totalBouquets += (cnt / k);
            cnt = 0;
        }
    }

    totalBouquets += (cnt / k);

    return totalBouquets >= m;
}

/*-------------------------------------------------------
    BRUTE FORCE SOLUTION
    Time Complexity: O(N * (maxDay - minDay + 1))
    Space Complexity: O(1)

int minDaysBrute(vector<int> &arr, int m, int k)
{
    long long flowersNeeded = 1LL * m * k;

    if (flowersNeeded > arr.size())
        return -1;

    int mini = *min_element(arr.begin(), arr.end());
    int maxi = *max_element(arr.begin(), arr.end());

    for (int day = mini; day <= maxi; day++)
    {
        if (possible(arr, day, m, k))
            return day;
    }

    return -1;
}
-------------------------------------------------------*/

// OPTIMAL SOLUTION (Binary Search)
// Time Complexity: O(N * log(maxDay - minDay))
// Space Complexity: O(1)

int minDaysOptimal(vector<int> &arr, int m, int k)
{
    long long flowersNeeded = 1LL * m * k;

    if (flowersNeeded > arr.size())
        return -1;

    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (possible(arr, mid, m, k))
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

