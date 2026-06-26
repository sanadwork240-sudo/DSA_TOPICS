#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int>& arr) {
    if(arr.size() == 1) return arr[0];
    if(arr[0] > arr[1]) return arr[0];
    if(arr[arr.size()-1] > arr[arr.size()-2]) return arr[arr.size()-1];

    int low = 1;
    int high = arr.size() - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
            return arr[mid];

        else if (arr[mid] < arr[mid+1])
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 2, 1, 3, 5, 6, 4};

    int peak = findPeak(arr);

    cout << "Peak element value: " << peak << endl;

    return 0;
}