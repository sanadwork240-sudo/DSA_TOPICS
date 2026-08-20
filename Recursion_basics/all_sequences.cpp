// printing the all sequences in an array can be done using two main tech , first of all the subarray and subsequence are two different thingh the subsequence doenot need to be contigious only but should be in order to avoind the duplicates 
// first solution is using the power set to find the subsequnces 
// for(int i=0->(1<<n-1)){
//     for(int j =0->n-1){
//         if(num & (1<<i)) sub+=a[i];
//     }
// }
// return sub;

// recursive method- the ides of recursion is to include the possibility of the take and the not take cases and recursively call the function accoprdingly for the next index till the index=n if the base condition is satisfied then the answer is included in the output vector or printed.

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

    int a[3] = {1, 2, 3};
    int n = 3;

    vector<int> ds;

    func(0, ds, n, a);

    return 0;
}