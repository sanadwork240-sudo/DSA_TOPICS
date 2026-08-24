#include <bits/stdc++.h>
using namespace std;

void func(int i, vector<int>& ds,int target,int sum ,int n, int a[]) {

    // Base case
    if (i == n) {
        if(sum==target){ 
            return true;
        }
        
        }
       
       return false;
    }

    // Take
    ds.push_back(a[i]);
    sum+=a[i];
   if(func(i + 1, ds,target,sum, n, a)) return true; 

    // Backtrack
    sum-=a[i];
    ds.pop_back();

    // Not take
    if(func(i + 1, ds,target,sum, n, a))return true;
    return false;
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