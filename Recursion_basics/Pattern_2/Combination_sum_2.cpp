// brute solution is to genrate all the subsequences and if sum ==0 then store them in the hashset to avoid the duplicates and then finally stiore them to the answer in it extra space and tc is useed

// optimal solution is like we can decide first element option then second elemnent option usin g the for loop from index to n-1 excluding the duolicates take 

void solve(int ind, int target, vector<int>& ds,
           vector<vector<int>>& ans, vector<int>& a) {

    if(target == 0) {
        ans.push_back(ds);
        return;
    }

    for(int i = ind; i < a.size(); i++) {

        // Skip duplicates at the same recursion level
        if(i > ind && a[i] == a[i-1])
            continue;

        // Since array is sorted
        if(a[i] > target)
            break;

        ds.push_back(a[i]);

        solve(i + 1, target - a[i], ds, ans, a);

        ds.pop_back();
    }
}