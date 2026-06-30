#include <iostream>
#include <vector>
using namespace std;

/*----------------------------------------------------

BRUTE FORCE

Time : O(N)
Space: O(1)

int findKthPositiveBrute(vector<int>& arr, int k)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] <= k)
            k++;
        else
            break;
    }

    return k;
}

-----------------------------------------------------*/


// Optimal (Binary Search)

int findKthPositive(vector<int>& arr, int k)
{
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int missing = arr[mid] - (mid + 1);

        if(missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low + k;
}

int main()
{
    vector<int> arr = {2,3,4,7,11};
    int k = 5;

    // cout << findKthPositiveBrute(arr, k);

    cout << findKthPositive(arr, k);

    return 0;
}