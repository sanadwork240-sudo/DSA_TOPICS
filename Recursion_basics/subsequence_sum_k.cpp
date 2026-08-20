#include <bits/stdc++.h>
using namespace std;

void func(int i, vector<int>& ds,int target,int sum ,int n, int a[]) {

    // Base case
    if (i == n) {
        if(sum==target){ 
            for (auto it : ds) {
            cout << it << " ";
        }
        }
       
        cout << endl;
        return;
    }

    // Take
    ds.push_back(a[i]);
    sum+=a[i];
    func(i + 1, ds,target,sum, n, a);

    // Backtrack
    sum-=a[i];
    ds.pop_back();

    // Not take
    func(i + 1, ds,target,sum, n, a);
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