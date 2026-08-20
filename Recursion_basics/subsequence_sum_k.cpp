#include <bits/stdc++.h>
using namespace std;

void func(int i, vector<int>& ds,int target,int sum int n, int arr[]) {

    // Base case
    if (i == n) {
        if(sum==k){ 
            for (auto it : ds) {
            cout << it << " ";
        }
        }
       
        cout << endl;
        return;
    }

    // Take
    ds.push_back(arr[i]);
    sum+=a[i];
    func(i + 1, ds,target,sum, n, arr);

    // Backtrack
    sum-=a[i];
    ds.pop_back();

    // Not take
    func(i + 1, ds,target,sum, n, arr);
}

int main() {

    int a[3] = {1, 2, 3};
    int n = 3;
    int sum=0;
    int target =2;

    vector<int> ds;

    func(0, ds,target,sum, n, a);

    return 0;
}