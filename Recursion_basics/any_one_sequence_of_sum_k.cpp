#include <bits/stdc++.h>
using namespace std;

void func(int i, vector<int>& ds, int n, int arr[]) {

    // Base case
    if (i == n) {
        for (auto it : ds) {
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    // Take
    ds.push_back(arr[i]);
    func(i + 1, ds, n, arr);

    // Backtrack
    ds.pop_back();

    // Not take
    func(i + 1, ds, n, arr);
}

int main() {

    int a[3] = {3,2,1};
    int n = 3;

    vector<int> ds;

    func(0, ds, n, a);

    return 0;
}