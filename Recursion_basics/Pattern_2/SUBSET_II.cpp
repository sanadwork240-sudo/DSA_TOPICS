
// Pattern 2 — For Loop Backtracking: Theory
// In the for-loop pattern, we don't make a direct pick / not-pick decision for each element.
// Instead, at every recursion level, we try every possible element that can be chosen next.
// The for loop represents all the possible choices at the current level.
// After choosing an element, we recursively move to the next index (i + 1).
// The current element is removed using backtracking so that other choices can be explored.
// Every ds formed during recursion is a valid subset, so we add it to the answer immediately.
// Unlike Pick/Not-Pick, we do not need to wait until ind == n to store the subset.

// For duplicate elements, after sorting, we skip duplicates at the same recursion level using:

// if (i != ind && nums[i] == nums[i - 1])
//     continue;



class Solution {
private:
    void findSubsets(int ind, vector<int>& nums,
                     vector<int>& ds,
                     vector<vector<int>>& ans) {

        ans.push_back(ds);

        for (int i = ind; i < nums.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i>ind && nums[i] == nums[i - 1])
                continue;  

            ds.push_back(nums[i]);

            findSubsets(i + 1, nums, ds, ans);

            // Backtrack
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> ds;

        // Sort so duplicates are adjacent
        sort(nums.begin(), nums.end());

        findSubsets(0, nums, ds, ans);

        return ans;
    }
};